#include <stdio.h>
/**
 * main - entry point
 * Description: Print all possible combination of different digits.
 * In ascending order, separated by a comma and space
 * Return: 0
 */
int main(void)
{
int digit1, digit2;

for (digit1 = 0; digit1 < 9; digit1++)
{
for (digit2 = digit1 + 1; digit2 < 10; digit2++)
{
putchar((digit1 % 10) + '0');
putchar((digit2 % 10) + '0');

if (digit1 == 8 && digit2 == 9)
continue;

putchar(',');
putchar(' ');
}
}

putchar('\n');
return (0);
}
