#include "main.h"

/**
 * _printf - produces output acccording to a format
 * @format: character string composed of 0 or more directives
 * Return: total length of final string
 */
int _printf(const char *format, ...)
{
	unsigned int total_length = 0, f = 0, i = 0;
	char *s_semifinal, *s_final;
	va_list arguments;
	char* (*func)(va_list);

	s_semifinal = malloc(sizeof(char) * 1024);
	if (!s_semifinal)
		return (-1);
	va_start(arguments, format);
	if (!format || !format[i] || (format[i] == '%' && !format[i + 1]))
	{
		va_end(arguments);
		free(s_semifinal);
		return (-1);
	}
	for (; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			func = get_func(format[i]);
			total_length += _strlen(func(arguments));
			_strcat(s_semifinal, (func(arguments)));
			f = (f + (_strlen(func(arguments))));
		}
		else
		{
			s_semifinal[f] = format[i];
			total_length++;
			f++;
		}
	}
	s_final = realloc(s_semifinal, (total_length + 1));
	write(1, s_final, total_length);
	va_end(arguments);
	free(s_final);

	return (_strlen(s_final));
}
