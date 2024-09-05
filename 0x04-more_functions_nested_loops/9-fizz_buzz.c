#include <stdio.h>
/**
* main - prints the numbers from 1 to 100,
* replacing multiples of 3 with "Fizz",
* multiples of 5 with "Buzz", and multiples of both with "FizzBuzz".
* Return: 0 (Success)
*/

int main(void)
{
int num = 1;

while (num <= 100)
{
	if (num % 3 == 0 && num % 5 == 0)
	printf("FizzBuzz");
	else if (num % 3 == 0)
	printf("Fizz");
	else if (num % 5 == 0)
	printf("Buzz");
	else
	printf("%d", num);
	if (num < 100)
	printf(" ");
	num++;
}
printf("\n");
return (0);
}
