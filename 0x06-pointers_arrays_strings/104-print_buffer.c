#include "main.h"

/**
 * print_buffer - Prints the contents of a buffer in a specified format
 * @b: The buffer to be printed
 * @size: The size of the buffer
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
