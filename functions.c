#include "main.h"
/**
 * print_c - returns char as string
 * @arguments: va_list
 * Return: string version of any char
 */
char *print_c(va_list arguments)
{
	char *s;
	char e;

	e = va_arg(arguments, int);
	if (e == '\0')
		e = '\0';

	s = malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = e;
	s[1] = '\0';

	return (s);
}
/**
 * print_s - returns a string
 * @arguments: va_list
 * Return: string or null
 */
char *print_s(va_list arguments)
{
	char *s;
	char *s2;

	if (arguments)
	{
		s = va_arg(arguments, char *);
		if (s == NULL)
			s = "(null)";
		s2 = malloc(sizeof(char) * (_strlen(s)));
		if (s2)
			_strcpy(s2, s);
		return (s2);
	}
	exit(-1);
}
