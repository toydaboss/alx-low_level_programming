#include <stdio.h>
/**
  * main - prints alphabet in lower and upper cases
  *
  * Return: always returns 0 for success
  */

int main(void)
{
	char x;
	char y;

	for (x='a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (y='A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
