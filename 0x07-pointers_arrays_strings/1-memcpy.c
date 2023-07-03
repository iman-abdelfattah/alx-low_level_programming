#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: pointer to source
 * @n: length of src to be copied
 * Return: the pointer to destination.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsighted i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
