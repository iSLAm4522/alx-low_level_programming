#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char num = '0', ch = 'a';
while (num <= '9')
	putchar(num++);
while (ch <= 'f')
	putchar(ch++);
putchar('\n');
return (0);
}
