#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Adds positive numbers provided as command-line arguments.
* @argc: The number of command-line arguments, including the program's name.
* @argv: An array of strings representing the command-line arguments.
*
* Return: 0 if the addition is successful, 1 if an invalid number is found.
*/

int main(int argc, char *argv[])
{
int result = 0, i = 1;
char *str;

if (argc == 1)
{
	printf("%d\n", result);
	return (0);
}
while (i < argc)
{
	str = argv[i];
	while (*str)
	{
	if (!isdigit(*str))
	{
		printf("Error\n");
		return (1);
	}
	str++;
	}
	result += atoi(argv[i]);
	i++;
}
printf("%d\n", result);
return (0);
}
