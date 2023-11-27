#include "elf_header_reader.h"
#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *  * print_error - Prints an error message to stderr and exits with status 98.
 *   * @message: The error message to be printed.
 */
void print_error(const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(98);
}
/**
 *  * print_magic - Prints the magic bytes from the ELF header.
 *   * @magic: Array containing the magic bytes.
 */
void print_magic(unsigned char *magic)
{
printf("  Magic:   %02x %02x %02x %02x\n",
magic[EI_MAG0], magic[EI_MAG1], magic[EI_MAG2], magic[EI_MAG3]);
}

/**
 *  * print_class - Prints the class of the ELF file.
 *   * @class: The class information from the ELF header.
 */
void print_class(unsigned char class)
{
printf("  Class:                             %s\n",
class == ELFCLASS32 ? "ELF32" :
class == ELFCLASS64 ? "ELF64" : "Invalid class");
}

/**
 *  * read_elf_header - Reads and displays information from the ELF header.
 *   * @filename: The name of the ELF file.
 */
void read_elf_header(const char *filename)
{
int fd, nread;
Elf64_Ehdr elf_header;
fd = open(filename, O_RDONLY);
if (fd == -1)
print_error("Error: Could not open file");
nread = read(fd, &elf_header, sizeof(elf_header));
if (nread == -1)
print_error("Error: Could not read ELF header");
if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
elf_header.e_ident[EI_MAG3] != ELFMAG3)
{
print_error("Error: Not an ELF file");
}
printf("ELF Header:\n");
print_magic(elf_header.e_ident);
print_class(elf_header.e_ident[EI_CLASS]);
close(fd);
}
#include "elf_header_reader.h"

/**
 *  * main - Entry point for the ELF Header Reader program.
 *   * @argc: The number of command-line arguments.
 *    * @argv: An array of strings containing the command-line arguments.
 *     *
 *      * Return: 0 on success, other values on failure.
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
print_error("Usage: elf_header elf_filename");
}
read_elf_header(argv[1]);
return (0);
}
