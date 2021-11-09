#include "main.h"

/**
 * _printf - produces output acccording to a format
 * @format: character string composed of 0 or more directives
 * Return: total length of final string
 */
int _printf(const char *format, ...)
{
	int total_length = 0, i = 0, j = 0;
	va_list arguments;
	types ide[] = {
		{"c", print_c},
		{"s", print_s},
		{"\0", NULL}
	};

	if (!format || (format[i] == '%' && !format[i + 1]))
		return (-1);
	for (; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		if (format[i] == '%')
		{
			for (j = 0; ide[j].fi[0]; j++)
				if (ide[j].fi[0] == format[i + 1])
					total_length += ide[j].func(arguments);
			if (format[i + 1] != '%')
			{
				total_length += _putchar('%');
				total_length += _putchar(format[i + 1]);
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
