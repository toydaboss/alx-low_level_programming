#include "main.h"

/**
  *_puts - prints a string
  *@s: input value
  *Return: returns nothing
  */

void _puts(char *str)
{
	int i = 0;

	while (str != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
