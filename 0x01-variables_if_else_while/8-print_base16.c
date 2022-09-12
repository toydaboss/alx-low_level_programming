#include <stdio.h>
/**
  *main - prints hex
  *
  *Return: returns 0 for success
  */

int main(void)
{
	char x;

	for (int i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

