#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Last digit of %d ", n);
if ((n % 10) > 5)
	printf("is %d and is greater than 5\n", (n % 10));
else if ((n % 10) < 6 && (n % 10) != 0)
	printf("is %d and is less than 6 and not 0\n", (n % 10));
else
	printf("is %d and is 0\n", (n % 10));
return (0);
}
