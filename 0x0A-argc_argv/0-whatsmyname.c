#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)
/**
* main - Prints the name of the program followed by a new line.
* @argc: The number of command-line arguments
* @argv: An array of strings representing the command-line arguments
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
UNUSED(argc);
printf("%s\n", argv[0]);
exit(EXIT_SUCCESS);
}
