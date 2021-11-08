#include "main.h"

/**
*_strlen - function gives last digit form SRAND
*@s: input
*Return: string length
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
