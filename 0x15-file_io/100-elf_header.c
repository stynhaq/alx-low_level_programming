#include "main.h"


/**
 * check_error - a func that handles the exit error mess
 *
 * @mes: the pointer to the message to print
 */

void	check_error(char *mes)
{
	dprintf(STDERR_FILENO, "%s\n", mes);
	exit(98);
}



/**
 * check_elf_file - checks if the file is an elf
 *
 * @h: the pointer to the header structure
 */

void	check_elf_file(Elf32_Ehdr *h)
{
	if (h->e_ident[EI_MAG0] == ELFMAG0			/* 0x7f */
			&& h->e_ident[EI_MAG1] == ELFMAG1	/* 'E'  */
			&& h->e_ident[EI_MAG2] == ELFMAG2	/* 'L'  */
			&& h->e_ident[EI_MAG3] == ELFMAG3)	/* 'F'  */
		return;
	check_error("Error: The requested file isn't an ELF file");
}



/**
 * check_elf_magic - this func display the elf magic
 *
 * @h: the pointer to the header structure
 */

void	check_elf_magic(Elf32_Ehdr *h)
{
	int i = 0;

	printf("  %s", "Magic:   ");
	while (i < EI_NIDENT)
	{
		if (i != 0)
			printf(" ");
		printf("%02x", h->e_ident[i++]);
	}
	printf("\n");
}

/**
 * check_elf_class - the function that displays the elf class
 *
 * @class: the class of the elf file
 */

void	check_elf_class(unsigned char class)
{
	printf("  %-35s", "Class:");
	if (class == ELFCLASSNONE)
		printf("INVALID");
	else if (class == ELFCLASS32)
		printf("ELF32");
	else if (class == ELFCLASS64)
		printf("ELF64");
	else
		printf("<unknown: %x>", class);
	printf("\n");
}

/**
 * check_elf_data - the function that open the elf data
 *
 * @data: the elf data
 */

void	check_elf_data(unsigned char data)
{
	printf("  %-35s", "Data:");
	if (data == ELFDATANONE)
		printf("INVALID");
	else if (data == ELFDATA2LSB)
		printf("2's complement, little endian");
	else if (data == ELFDATA2MSB)
		printf("2's complement, big endian");
	else
		printf("<unknown: %x>", data);
	printf("\n");
}

/**
 * check_elf_version - the function that shows the elf version
 *
 * @version: the version of the elf file
 */

void	check_elf_version(unsigned char version)
{
	printf("  %-35s", "Version:");
	if (version == EV_NONE)
		printf("(invalid)");
	else if (version == EV_CURRENT)
		printf("%d (current)", version);
	else
		printf("%d", version);
	printf("\n");
}

/**
 * check_elf_osabi - the function checks the elf osabi
 *
 * @osabi: the osabi of the elf file
 */

void	check_elf_osabi(unsigned char osabi)
{
	printf("  %-35s", "OS/ABI:");
	if (osabi == ELFOSABI_NONE || osabi == ELFOSABI_SYSV)
		printf("UNIX - System V");
	else if (osabi == ELFOSABI_HPUX)
		printf("UNIX - HP-UX");
	else if (osabi == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD");
	else if (osabi == ELFOSABI_LINUX)
		printf("UNIX - Linux");
	else if (osabi == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris");
	else if (osabi == ELFOSABI_IRIX)
		printf("UNIX - IRIX");
	else if (osabi == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD");
	else if (osabi == ELFOSABI_TRU64)
		printf("UNIX - TRU64");
	else if (osabi == ELFOSABI_ARM)
		printf("UNIX - ARM");
	else if (osabi == ELFOSABI_STANDALONE)
		printf("UNIX - Stand-alone");
	else
		printf("<unknown: %x>", osabi);
	printf("\n");
}

/**
 * check_elf_type - the function that checks for the elf type
 *
 * @type: the type of the elf file
 * @be: if the elf type is big endian then 1, else 0
 */

void	check_elf_type(u_int16_t type, int be)
{
	printf("  %-35s", "Type:");

	if (be == 1)
		type = type >> 8;

	if (type == ET_NONE)
		printf("UNKNOWN (Unknown file)");
	else if (type == ET_REL)
		printf("REL (Relocatable file)");
	else if (type == ET_EXEC)
		printf("EXEC (Executable file)");
	else if (type == ET_DYN)
		printf("DYN (Shared object file)");
	else if (type == ET_CORE)
		printf("CORE (Core file)");
	else
		printf("<unknown: %x>", type);
	printf("\n");
}

/**
 * check_elf_entry - the func checks for the entry pt address of the elf
 *
 * @addr: the address of the entry point
 * @be: big endian (1 if yes, 0 else)
 */

void	check_elf_entry(Elf64_Addr addr, int be)
{
	if (be == 1)
		addr = ((addr >> 24) & 0x000000ff)
		| ((addr >> 8) & 0x0000ff00)
		| ((addr << 8) & 0x00ff0000)
		| ((addr << 24) & 0xff000000);
	printf("  %-35s%#lx\n", "Entry point address:", addr);
}


/**
 * check_elf - the function checks for the elf
 *
 * @h: the pointer to the header structure
 */

void	check_elf(Elf32_Ehdr *h)
{
	check_elf_file(h);
	printf("ELF Header:\n");
	check_elf_magic(h);
	check_elf_class(h->e_ident[EI_CLASS]);
	check_elf_data(h->e_ident[EI_DATA]);
	check_elf_version(h->e_ident[EI_VERSION]);
	check_elf_osabi(h->e_ident[EI_OSABI]);
	printf("  %-35s%d\n", "ABI Version:", h->e_ident[EI_ABIVERSION]);
	check_elf_type(h->e_type,
			(h->e_ident[EI_DATA] == ELFDATA2MSB) ? 1 : 0);
	check_elf_entry(h->e_entry,
			(h->e_ident[EI_DATA] == ELFDATA2MSB) ? 1 : 0);
}

/**
 * main - program that displays the information contained in the ELF
 * header at the start of an ELF file
 *
 * @argc: argument count
 * @argv: pointer to the argument vector
 *
 * Return: 0 if successful
 */


int		main(int argc, char **argv)
{
	Elf32_Ehdr *header;
	int fd = 0;
	ssize_t bytes = 0;

	if (argc != 2)
		check_error("Usage: elf_header elf_filename");

	header = malloc(sizeof(Elf32_Ehdr));
	fd = open(argv[1], O_RDONLY);
	if (header && fd > -1)
	{
		if (lseek(fd, 0, SEEK_SET) != 0)
			check_error("Error: Can't find the header of the requested file");
		bytes = read(fd, header, sizeof(Elf32_Ehdr));
		if (bytes == -1)
			check_error("Error: Can't read the header of the requested file");
		check_elf(header);
		if (close(fd) != 0)
			check_error("Error: Can't close the current file directory");
		free(header);
		return (0);
	}

	check_error("Error: Can't open the requested ELF file");
	return (0);
}
