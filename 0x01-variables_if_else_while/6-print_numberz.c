#include <stdio.h>
/**
  *main - prints numbers from 0-9
  *
  *Return: return 0 for success
  */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
