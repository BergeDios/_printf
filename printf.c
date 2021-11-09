#include "main.h"

/**
 * _printf - produces output acccording to a format
 * @format: character string composed of 0 or more directives
 * Return: total length of final string
 */
int _printf(const char *format, ...)
{
	int total_length = 0, i = 0, k;
	va_list arguments;
	types ide[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};

	if (!format)
		return (-1);
	va_start(arguments, format);
	for (; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == '%')
				_putchar('%'), i++, total_length++;
			else
			{
				for (k = 0; ide[k].fi; k++)
				{
					if (ide[k].fi[0] == format[i + 1])
					{
						total_length += ide[k].func(arguments);
						i++;
					}
				}
			}

		}
		else
			_putchar(format[i]), total_length++;
	}
	va_end(arguments);
	return (total_length);
}
