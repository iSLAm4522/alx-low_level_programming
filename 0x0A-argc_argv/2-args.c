#include <stdio.h>
#include <stdlib.h>
/**
* main - Prints all command-line arguments received, each on a new line.
* @argc: The number of command-line arguments, including the program's name.
* @argv: An array of strings representing the command-line arguments.
*
* Return: Always 0 (Success)
*/
int main(int argc, char **argv)
{
while (argc--)
	printf("%s\n", *argv++);
exit(EXIT_SUCCESS);
}
