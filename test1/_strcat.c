#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: string to add to
 * @src: string to be added
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int p1 = 0, p2 = 0;

	while (dest[p1] != '\0')
		p1++;
	while (src[p2] != '\0')
	{
		dest[p1 + p2] = src[p2];
		p2++;
	}

	return (dest);
}
