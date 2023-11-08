#include "function_pointers.h"
#include <stddef.h>

/**
 *  * print_name - Prints a name using a function pointer.
 *   * @name: The name to print.
 *    * @f: A function pointer to a printing function.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
