#include "main.h"

/**
 * print_array - prints n element of an array of integers
 * @a: A pointer to an int that will be changed
 * @n: return value n
 * Return: void which means our anser is correct
 */
void print_array(int *a, int n)
{
int i;

i = 0;
while (i < n)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}

i++;
}

printf("\n");
}
