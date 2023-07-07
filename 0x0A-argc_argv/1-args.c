#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of commnd line arguments
 * @argv: pointer to array of command line arguments
 * Return: 0 in succes, 1 in fail
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
