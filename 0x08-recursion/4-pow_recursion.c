#include "main.h"
/**
 * _pow_recursion - search a string for any of a number of bytes
 * @x: base
 * @y: argument
 * Return: pointer to the number of bytes in a x that matches one of
 * the bytes in 'accept' or null if no such byte is found
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 1)
return (x);
else if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
