#include <stdio.h>
/**
  *main - prints numbers from 0-9
  *
  *Return: return 0 for success
  */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
