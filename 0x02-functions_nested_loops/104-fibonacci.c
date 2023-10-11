#include <stdio.h>
int main(void)
{
int n;
unsigned long a = 1, b = 2, next;
printf("%lu, %lu, ", a, b);
for (n = 3; n <= 98; n++)
{
next = a + b;
a = b;
b = next;
if (n == 98)
printf("%lu\n", next);
else
printf("%lu, ", next);
}
return (0);
}
