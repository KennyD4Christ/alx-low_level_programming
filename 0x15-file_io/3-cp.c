#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  * copy_file - Copies the content of one file to another.
 *   * @file_from: Source file descriptor.
 *    * @file_to: Destination file descriptor.
 */
void copy_file(int file_from, int file_to)
{
char buffer[1024];
ssize_t read_status, write_status;
while ((read_status = read(file_from, buffer, 1024)) > 0)
{
write_status = write(file_to, buffer, read_status);
if (write_status == -1)
{
dprintf(2, "Error: Can't write to fd %d\n", file_to);
exit(99);
}
}
if (read_status == -1)
{
dprintf(2, "Error: Can't read from fd %d\n", file_from);
exit(98);
}
}
/**
 *  * main - Entry point for the cp program.
 *   * @argc: Number of arguments.
 *    * @argv: Array of argument strings.
 *     *
 *      * Return: 0 on success, appropriate error code on failure.
 */
int main(int argc, char *argv[])
{
int file_from, file_to, close_status;
if (argc != 3)
{
dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
{
dprintf(2, "Error: Can't write to %s\n", argv[2]);
close(file_from);
exit(99);
}
copy_file(file_from, file_to);
close_status = close(file_from);
if (close_status == -1)
{
dprintf(2, "Error: Can't close fd %d\n", file_from);
exit(100);
}
close_status = close(file_to);
if (close_status == -1)
{
dprintf(2, "Error: Can't close fd %d\n", file_to);
exit(100);
}
return (0);
}
