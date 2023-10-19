#include "main.h"

/**
 * print_buffer - Prints the contents of a buffer in a specified format
 * @b: The buffer to be printed
 * @size: The size of the buffer
 *
 * Description: This function prints the content of size bytes of the buffer
 * pointed by b. The output should print 10 bytes per line, with each line
 * starting with the position of the first byte of the line in hexadecimal (8 chars).
 * Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time,
 * separated by a space. Each line shows the content of the buffer. If the byte is a
 * printable character, it prints the letter; otherwise, it prints '.'.
 * Each line ends with a new line '\n'.
 *
 * If size is 0 or less, the output should be a new line only '\n'.
 */
void print_buffer(char *b, int size) {
	if (size <= 0) {
		_putchar('\n');
		return;
	}

	for (int i = 0; i < size; i += 10) {
		printf("%08x: ", i);

		for (int j = 0; j < 10; j++) {
			if (i + j < size) {
				int byte = b[i + j];
				printf("%02x", (unsigned char)byte);
			} else {
				printf("  ");
			}

			if (j % 2 == 1) {
				printf(" ");
			}
		}

		printf(" ");

		for (int j = 0; j < 10; j++) {
			if (i + j < size) {
				char ch = b[i + j];
				_putchar((ch >= 32 && ch <= 126) ? ch : '.');
			}
		}

		_putchar('\n');
	}
}
