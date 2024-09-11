#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two command-line arguments and prints the result.
 * @argc: The number of command-line arguments, including the program's name.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: 0 if exactly two arguments are provided, 1 otherwise.
 */

int main(int argc, char *argv[])
{
int num1, num2, result;

if (argc < 3)
{
	printf("Error\n");
	return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}
