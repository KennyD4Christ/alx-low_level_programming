#include <stdio.h>
#include <stdlib.h>
/**
 *  * main - Entry point
 *   * @argc: The number of arguments
 *    * @argv: An array of arguments
 *      * Description: Calculate the minimum number of coins
 *      for a given amount of cents.
 *       *
 *        * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
int coins[] = {25, 10, 5, 2, 1};
int cents, num_coins, coin_count, i;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
num_coins = sizeof(coins) / sizeof(coins[0]);
coin_count = 0;
for (i = 0; i < num_coins; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
coin_count++;
}
}
printf("%d\n", coin_count);
return (0);
}
