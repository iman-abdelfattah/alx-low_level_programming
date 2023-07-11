#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of memory to print
 * @c: int
 * Return: nothing
*/
char *create_array(unsigned int size, char c)
{
char *p = (char *) malloc(size * sizeof(char));
if (p == 0 || size == 0)
return (0);
while (size--)
p[size] = c;
return (p);
}
