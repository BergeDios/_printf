#include "main.h"

/**
 * _printf - produces output acccording to a format
 * @format: character string composed of 0 or more directives
 * Return: total length of final string
 */
int _printf(const char *format, ...)
{
	int count = 0, length = 0, func;
	va_list arguments;

	if (format == NULL)
		return (-1);
	va_start(arguments, format);
	while (format[i])
	{
		if (format[count] == '%')
		{
			if (!format[count + 1])
				return (-1);
			if (format[count + 1] == '%')
			{
				length++;
				_putchar(format[count + i]);
				count++;
				continue;
			}
			for (func = 0; funcstr(func).fi; func++)
				if (format[count + 1] == funcstr(func).fi[0])
				{
					length += funcstr(func).f(arguments);
					counter++;
					break;
				}
			if (!funcstr(func).fi)
			{
				_putchar(format[count]);
				length++;
			}
		}
		else
		{
			_putchar(format[count]);
			length++;
		}
		i++;
	}
	va_end(arguments);
	return (count);
}
