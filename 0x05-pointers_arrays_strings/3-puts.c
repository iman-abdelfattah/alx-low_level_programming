#include "main.h"
/**
 * _puts - prints a string, followed by a newline to stdout
 * @str: string paramater to print
 * Return: Nothing
*/
void _puts(char *str)
{
int counter = 0;
while (str[counter] != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n');
}
