#include<stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int start = 97, end = 122;
while (start <= end)
{
putchar(start++);
}
putchar('\n');
return (0);
}
