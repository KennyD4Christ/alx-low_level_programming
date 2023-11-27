#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024
/**
 *  * copy_file - Copies the content of one file to another.
 *   * @file_from: The source file.
 *    * @file_to: The destination file.
 */
void copy_file(const char *file_from, const char *file_to)
{
int fd_from, fd_to, r, w;
char buffer[BUFFER_SIZE];
fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
print_error(98, file_from);
}
fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC,
S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
if (fd_to == -1)
{
print_error(99, file_to);
}
do {
r = read(fd_from, buffer, BUFFER_SIZE);
if (r == -1)
{
print_error(98, file_from);
}
w = write(fd_to, buffer, r);
if (w == -1)
{
print_error(99, file_to);
}
} while (r > 0);
close_fd(fd_from);
close_fd(fd_to);
}
/**
 *  * close_fd - Closes a file descriptor.
 *   * @fd: The file descriptor to close.
 */
void close_fd(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
/**
* print_error - Prints an error message based on the given code and file name
 *   * @code: The error code.
 *    * @file_name: The name of the file related to the error.
 */
void print_error(int code, const char *file_name)
{
switch (code)
{
case 97:
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
break;
case 98:
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
break;
case 99:
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
break;
case 100:
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_name);
break;
default:
break;
}
exit(code);
}
