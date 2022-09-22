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
	int j;

	while (src[l] != '\0')
	{
		++l;
	}

	for (j = 0; src[j] != '\0'; ++j, ++l)
	{
		dest[l] = src[j];
	}
	dest[l] = '\0';
	return (dest);
}
