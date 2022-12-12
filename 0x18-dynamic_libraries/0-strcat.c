#include "main.h"

/**
  *_strcat - function concatenates stringa
  *@dest: input destination
  *@src: input src
  *Return: returns char
  */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
		++i;
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
