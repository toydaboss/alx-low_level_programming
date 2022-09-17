#include "main.h"

/**
  *more_number - prints numbers
  *
  *Return: it is void
  */

void more_numbers(void)
{
	int i,j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
			_putchar(i);
		_putchar('\n');
	}
}
