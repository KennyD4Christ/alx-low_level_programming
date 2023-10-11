#include <stdio.h>
typedef struct {
unsigned int a[200];
} BigInt;
/**
 * add - Add two BigInt numbers and store the result in another BigInt
 * @x: The first BigInt
 * @y: The second BigInt
 * @result: The BigInt to store the result
 */
void add(BigInt *x, BigInt *y, BigInt *result)
{
int carry = 0;
for (int i = 0; i < 200; i++)
{
int temp = x->a[i] + y->a[i] + carry;
result->a[i] = temp % 1000000000;
arry = temp / 1000000000;
}
}
/**
 * main - Entry point of the program
 * Return: 0 on success
 */
int main(void)
{
BigInt a, b, c;
for (int i = 0; i < 200; i++)
{
a.a[i] = 0;
b.a[i] = 0;
c.a[i] = 0;
}
a.a[0] = 1;
b.a[0] = 2;
printf("%d", a.a[0]);
for (int i = 1; i <= 98; i++)
{
add(&a, &b, &c);
a = b;
b = c;
int leadingZero = 0;
for (int j = 199; j >= 0; j--)
{
if (c.a[j] != 0 || leadingZero)
{
printf("%s%09d", (leadingZero ? ", " : ""), c.a[j]);
leadingZero = 1;
}
}
if (i < 98)
{
printf(", ");
}
}
printf("\n");
return (0);
}
