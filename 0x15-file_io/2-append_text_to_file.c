#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 *  * append_text_to_file - Appends text at the end of a file.
 *   * @filename: Name of the file.
 *    * @text_content: NULL terminated string to add at the end of the file.
 *     *
 *      * Return: (1) on success, (-1) on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, write_status, close_status;
size_t text_length = 0;
if (filename == NULL)
return (-1);
if (text_content == NULL)
return (1);
while (text_content[text_length] != '\0')
text_length++;
file_descriptor = open(filename, O_WRONLY | O_APPEND);
if (file_descriptor == -1)
return (-1);
write_status = write(file_descriptor, text_content, text_length);
if (write_status == -1)
{
close(file_descriptor);
return (-1);
}
close_status = close(file_descriptor);
if (close_status == -1)
return (-1);
return (1);
}