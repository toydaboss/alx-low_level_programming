#include <stdio.h>

/**
  * main - prints out the letters of the alphabeth
  *
  * Return: always return 0
  */

int main(void)
{
	char x;
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
