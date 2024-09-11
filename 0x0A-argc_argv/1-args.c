#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)
/**
 * main - Prints the number of command-line arguments passed to the program.
 * @argc: The number of command-line arguments, including the program's name.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
UNUSED(argv);
printf("%d\n", argc - 1);
exit(EXIT_SUCCESS);
}
