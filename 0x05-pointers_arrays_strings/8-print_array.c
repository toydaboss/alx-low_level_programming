#include "main.h"

/**
  *print_array - prints array
  *@a: inputs
  *@n: input value
  *Return: resturn nothing
  */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
