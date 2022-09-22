#include "main.h"

/**
  *_strcat - function concatenates stringa
  *@dest: input destination
  *@src: input src
  *Return: returns char
  */

char *_strcat(char *dest, char *src)
{
	int l = 0;
	int j = 0;

	while (dest[l] != '\0')
	{
		++l;
	}

	for (j = 0; src[j] != '\0'; ++j, ++l)
	{
		dest[l] = src[j];
	}
	src[l] = '\0';
	return (src);
}
