#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: int
 * @argv: list
 * Return: 0
*/
int main(int argc, char const **argv)
{
int n = 0;
while (argc--)
{
printf("%s\n", argv[n]);
n++;
}
return (0);
}
