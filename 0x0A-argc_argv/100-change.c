#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins to make change for an amount.
 * @argc: The number of command-line arguments, including the program's name.
 * @argv: An array of strings representing the command-line arguments.
 * Return: 0 if successful, 1 if incorrect number of arguments is provided.
 */
int main(int argc, char *argv[])
{
int num, cnt = 0;

if (argc != 2)
{
	printf("Error\n");
	return (1);
}
num = atoi(argv[1]);
if (num < 0)
{
	printf("0\n");
return (0);
}
while (num)
{
	if (num >= 25)
	{cnt = num / 25;
	num %= 25;
}
	else if (num >= 10)
	{cnt += num / 10;
	num %= 10;
	}
	else if (num >= 5)
	{cnt += num / 5;
	num %= 5;
	}
	else if (num >= 2)
	{cnt += num / 2;
	num %= 2;
	}
	else
	{cnt += num;
	num = 0;
	}
}
printf("%d\n", cnt);
return (0);
}
