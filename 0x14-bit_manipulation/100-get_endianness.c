#include "main.h"

/**
 *  * get_endianness - Checks the endianness of the system.
 *   *
 *    * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
unsigned int num = 1;
char *endianness_check = (char *)&num;
/* If the first byte is 1, it's little endian. Otherwise, it's big endian. */
return (*endianness_check);
}
