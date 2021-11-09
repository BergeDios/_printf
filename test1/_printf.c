#include "main.h"

/**
 * _printf - produces output acccording to a format
 * @format: character string composed of 0 or more directives
 * Return: total length of final string
 */
int _printf(const char *format, ...)
{
	int total_length = 0, i = 0;
	va_list arguments;
	int (*func)(va_list);

	if (!format || (format[i] == '%' && !format[i + 1]))
		return (-1);
	for (; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		if (format[i] == '%' && (format[i + 1] == 'c'
			|| format[i + 1] == 's' || format[i + 1] == '%'))
		{
			if (format[i + 1] != '%')
			{
				func = get_func(format[i + 1]);
				total_length += func(arguments);
				i++;
			}
			else
				_putchar('%'), i++, total_length++;
		}
		else
			_putchar(format[i]), total_length++;
	}
	va_end(arguments);
	return (total_length);
}
