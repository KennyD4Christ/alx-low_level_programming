#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include "main.h"

/**
 *  * elf_magic_check - Checks if the file has the correct ELF magic number.
 *   * @header: The ELF header.
 */
void elf_magic_check(Elf32_Ehdr header)
{
if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
{
print_error(98, "Not an ELF file");
}
}
/**
 *  * display_elf_header - Displays the ELF header information.
 *   * @header: The ELF header.
 */
void display_elf_header(Elf32_Ehdr header)
{
int i;
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
{
printf("%02x ", header.e_ident[i]);
}
printf("\n");
printf("  Class:                             %s\n",
(header.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
printf("  Data:                              %s\n",
(header.e_ident[EI_DATA] == ELFDATA2LSB) ?
"2's complement, little endian" : "2's complement, big endian");
printf("  Version:                           %d (current)\n",
header.e_ident[EI_VERSION]);
printf("  OS/ABI:                            %d\n", header.e_ident[EI_OSABI]);
printf("  ABI Version:                       %d\n",
header.e_ident[EI_ABIVERSION]);
printf("  Type:                              %d\n", header.e_type);
printf("  Entry point address:               %lx\n",
(unsigned long)header.e_entry);
}
/**
 *  * read_elf_header - Reads the ELF header from the file.
 *   * @fd: The file descriptor.
 *    * @header: The ELF header.
 */
void read_elf_header(int fd, Elf32_Ehdr *header)
{
if (read(fd, header, sizeof(*header)) != sizeof(*header))
{
print_error(98, "Error reading ELF header");
}
}
/**
 *  * main - Displays the ELF header information for the specified ELF file.
 *   * @argc: The number of command-line arguments.
 *    * @argv: The array of command-line arguments.
 *     *
 *      * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
int fd;
Elf32_Ehdr header;
if (argc != 2)
{
print_error(98, "Usage: elf_header elf_filename");
}
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
print_error(98, "Error opening file");
}
read_elf_header(fd, &header);
elf_magic_check(header);
display_elf_header(header);
close(fd);
return (0);
}
/**
 *  * print_error - Prints an error message to stderr
 *  and exits the program with the specified code.
 *   * @code: The exit code.
 *    * @file_name: The name of the file associated with the error.
 */
void print_error(int code, const char *file_name)
{
dprintf(STDERR_FILENO, "%s: ", file_name);
perror("");
exit(code);
}
