#include "main.h"
/**
 * print_c - returns char as string
 * @arguments: va_list
 * Return: string version of any char
 */
int print_c(va_list arguments)
{
	char e;

	e = va_arg(arguments, int);
	_putchar(e);
	return (1);
}
/**
 * print_s - returns a string
 * @arguments: va_list
 * Return: string or null
 */
int print_s(va_list arguments)
{
	char *s;
	int l;

	s = va_arg(arguments, char *);
	if (s)
		for (l = 0; str[l]; l++)
			_putchar(str[l]);
	else
		l = _printf("(null)");
	return (largo);
}



types funcstr(int i)
{
types arr[] = {
	{"c", print_c},
	{"s", print_s},
	{'\0', NULL}
};
	return (arr[i]);
}
