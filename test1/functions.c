#include "main.h"
/**
 * print_c - returns char as string
 * @arguments: va_list
 * @total_length: length for final string
 * Return: string version of any char
 */
int print_c(va_list arguments, int total_length)
{
	char e;

	e = va_arg(arguments, int);
	_putchar(e);
	total_length++;
	return (total_length);
}
/**
 * print_s - returns a string
 * @arguments: va_list
 * @total_length: length of final string
 * Return: string or null
 */
int print_s(va_list arguments, int total_length)
{

	char *s;
	int i = 0;

	s = va_arg(arguments, char *);
	if (s == NULL)
		s = "(null)";
	for (; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		total_length++;
	}
	return (total_length);
}
