#include <stdio.h>

/**
  *main - prints 1-90
  *
  *Return: returns 0 for success
  */

int main(void)
{
	int a,b;

	for (a = 48; a < 57; a++)
	{
		for(b = 49; b < 58; b++)
		{
			if (b > a)
			{
				putchar(a);
				putchar(b);

				if (a !=56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
