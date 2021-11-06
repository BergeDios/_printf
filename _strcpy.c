#include "main.h"

/**
  *_strcpy - a function that copies another string into a buufer
  *@dest: destination buffer
  *@src: source string
  *Return: dest copied string
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
