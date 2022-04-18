#include "holberton.h"

/**
 * print_rev - prints a string in reverse order
 * @s: apointer to an int that will be changed
 *
 * Return: void that means our answer is correct
 */
void print_rev(char *s)
{
int i = 0;
while (s[i])
i++;

while (i--)
{
_putchar(s[i]);
}
_putchar('\n');

}
