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
