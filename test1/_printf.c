#include "main.h"

/**
 * _printf - produces output acccording to a format
 * @format: character string composed of 0 or more directives
 * Return: total length of final string
 */
int _printf(const char *format, ...)
{
	int total_length = 0, f = 0, i = 0;
	char *s_semifinal, *s_final, *k;
	va_list arguments;
	char* (*func)(va_list);

	va_start(arguments, format);
	s_semifinal = malloc(sizeof(char) * 1024);
	if (!s_semifinal)
		return (-1);
	for (; format && format[i]; i++, f++, total_length++)
	{
		if (!format || !format[i] || (format[i] == '%' && !format[i + 1]))
			return (-1);
		if (format[i] == '%' && (format[i + 1] == 'c'
			|| format[i + 1] == 's' || format[i + 1] == '%'))
		{
			if (format[i + 1] != '%')
			{
				func = get_func(format[i + 1]), k = func(arguments);
				total_length = (total_length + (_strlen(k)) - 1);
				_strcat(s_semifinal, k);
				f = (f + (_strlen(k)) - 1), free(k), i++;
			}
			else
				s_semifinal[f] = '%', i++;
		}
		else
			s_semifinal[f] = format[i];
	}
	s_final = realloc(s_semifinal, (total_length));
	write(1, s_final, total_length);
	va_end(arguments), free(s_final);
	return (total_length);
}
