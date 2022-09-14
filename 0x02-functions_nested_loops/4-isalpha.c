#include "main.h"

/**
  *_isalpha - checks alphabet
  *
  *Return: returns 0 for success
  */

int _isalpha(int c)
{
	char r, t;
	int alpha;

	for (r = 'a'; r <= 'z'; r++)
	{
		if (r == c)
			alpha = 1;
	}
	for (t = 'A'; t <= 'Z'; t++)
	{
		if (t == c)
			alpha = 1;
	}
	return (alpha);
}
