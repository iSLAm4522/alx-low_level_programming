#include <stdio.h>

/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
int ans = 0, i = 3;

while (i < 1024)
{
	if (i % 3 == 0 || i % 5 == 0)
	ans += i;
	i++;
}
printf("%d\n", ans);
return (0);
}
