#include "main.h"
/**
 * print_d - paste int to buffer and return new length
 * @arguments: va_list
 * Return: string or null
 */
int print_d(va_list arguments)
{
	int total_length = 0;
	long int n = (long int)va_arg(arguments, int);

	total_length = recursive_d(n);
	return (total_length);
}
/**
 * recursive_d - makes recrsion to print d to buffer
 * @n: va_arg int
 * Return: total length
 */
int recursive_d(long int n)
{
	int total_length = 0;

	if (n < 0)
	{
		_putchar('-');
		return (recursive_d((n * -1)) + 1);

	}
	if (n < 10)
	{
		_putchar(n + '0');
		return (1);
	}
	total_length = recursive_d(n / 10);
	_putchar((n % 10) + '0');
	return (total_length + 1);
}
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
	i++;
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
	if (s)
	{
		for (; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
	}
	else
	{
		s = "(null)";
		for (; s[i] != '\0'; i++)
			_putchar(s[i]);
	}
	return (i);
}
/**
 * print_r - prints reversed string
 * @arguments: va_list
 * Return: total length
 */
int print_r(va_list arguments)
{
	char *s;
	int j, i;

	s = va_arg(arguments, char *);

	for (j = 0; s[j] != 0; j++)
	i = j;
	for (j--; j >= 0; j--)
		_putchar(s[j]);
	return (i);
}
