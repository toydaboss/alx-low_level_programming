#include <stdio.h>

/**
  *main - prints alphabet except for some letters
  *
  *Return: returns 0 for success
  */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
			continue;
		putchar(x);
	}
	putchar('\n');
	return (0);
}
