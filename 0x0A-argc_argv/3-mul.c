#include <stdio.h>
#include <stdlib.h>
/**
 * main - print sum of two numbers
 * @argc: number of command line arguments
 * @argv: pointer to array of command line arguments
 * Return: 0 - success, 1 - fail
*/
int main(int argc, char *argv[])
{
int n;
if (argc == 3)
{
n = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", n);
}
else
{
printf("error\n");
return (1);
}
return (0);
}
