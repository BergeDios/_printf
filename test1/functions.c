#include "main.h"
/**
 * print_c - returns char as string
 * @arguments: va_list
 * Return: string version of any char
 */
int print_c(va_list arguments)
{
	char e;
	int i = 0;

	e = va_arg(arguments, int);
	_putchar(e);
	return (i);
}
/**
 * print_s - returns a string
 * @arguments: va_list
 * Return: string or null
 */
int print_s(va_list arguments)
{

	char *s;
	int i = 0;

	s = va_arg(arguments, char *);
	if (s == NULL)
		s = "(null)";
	for (; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (i);
}
