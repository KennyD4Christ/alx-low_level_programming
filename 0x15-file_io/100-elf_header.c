#include "main.h"

/**
 *  * print_elf_header - Display information from ELF header
 *   * @header: Pointer to ELF header structure
 */
void print_elf_header(Elf64_Ehdr *header)
{
int i;
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");
printf("  Class:                             %s\n",
(header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" :
(header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "Invalid Class");
printf("  Data:                              %s\n",
(header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" :
(header->e_ident[EI_DATA] == ELFDATA2MSB) ? "2's complement, big endian" :
"Invalid Data encoding");
printf("  Version:                           %d (current)\n",
		header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            %s\n",
(header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" :
(header->e_ident[EI_OSABI] == ELFOSABI_HPUX) ? "HP-UX" :
(header->e_ident[EI_OSABI] == ELFOSABI_NETBSD) ? "NetBSD" :
(header->e_ident[EI_OSABI] == ELFOSABI_LINUX) ? "Linux" : "Unknown OS/ABI");
printf("  ABI Version:                       %d\n",
		header->e_ident[EI_ABIVERSION]);
printf("  Type:                              %s\n",
(header->e_type == ET_REL) ? "REL (Relocatable file)" :
(header->e_type == ET_EXEC) ? "EXEC (Executable file)" :
(header->e_type == ET_DYN) ? "DYN (Shared object file)" :
(header->e_type == ET_CORE) ? "CORE (Core file)" : "Unknown type");
printf("  Entry point address:               0x%lx\n",
		(unsigned long)header->e_entry);
}

/**
    * main - Program entry point
    *  * @argc: Argument count
    *   * @argv: Argument vector
    *    * Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;
if (argc != 2)
print_error(98, "Usage: elf_header elf_filename");
fd = open(argv[1], O_RDONLY);
if (fd == -1)
print_error(98, "Error: Cannot open file");
if (read(fd, &header, sizeof(header)) != sizeof(header))
print_error(98, "Error: Cannot read ELF header");
if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
print_error(98, "Error: Not an ELF file");
print_elf_header(&header);
close(fd);
return (0);
}
