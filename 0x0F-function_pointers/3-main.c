#include "3-calc.h"
/**
 * main - Performs simple operations based on user input.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: This program takes three arguments:
 * two integers and an operator (+, -, *, /, or %). It checks for the
 * correct number of arguments and selects the appropriate operation
 * function using `get_op_func`. If an error occurs (invalid input or
 * operator), it prints "Error" and exits with specific exit codes.
 *
 * Exit codes:
 * 98 - Incorrect number of arguments.
 * 99 - Invalid operator.
 *
 */

int main(int argc, char *argv[])
{
int num1, num2, result;

int (*operation)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operation = get_op_func(argv[2]);
if (operation == NULL)
{
printf("Error\n");
exit(99);
}
result = operation(num1, num2);
printf("%d\n", result);
return (0);
}
