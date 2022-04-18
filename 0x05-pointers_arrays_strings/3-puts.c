include "main.h"

/**
 * _puts - prints a string
 * @str: A pointer to an int that will be changed
 *
 * Return: void that means our answer is correct
 */
void _puts(char *str)
{

while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
