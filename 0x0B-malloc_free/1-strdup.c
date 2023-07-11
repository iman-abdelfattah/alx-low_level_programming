#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to int
 * Return: Always 0
*/
char *_strdup(char *str)
{
char *str = (char *)malloc(strdup(str) + 1);
if (str == NULL)
{
return (NULL);
}
else if (str != NULL)
{
return (str);
}
else
{
return (NULL);
}
free(str);
return (0);
}
