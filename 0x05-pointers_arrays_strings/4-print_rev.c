#include "main.h"

/**
  *print_rev - prints backward
  *@s: input value
  *Return: returns nothing
  */

void print_rev(char *s)
{
	int length = _strlen(s);

	while (length)
		_putchar(s[--length]);
	_putchar('\n');
}
