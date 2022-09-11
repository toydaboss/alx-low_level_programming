#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - prints whether the value of n is positive or negative
  *
  *Return: Always returns 0 for success
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n >= 0)
		printf("%d is positive", n);
	else 
		printf("%d is negative",n);
	return (0);
}
