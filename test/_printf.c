#include "main.h"

/**
 * _printf - produces output acccording to a format
 * @format: character string composed of 0 or more directives
 * @print_c: prints char
 * Return: total length of final string
 */
int _printf(const char *format, ...)
{
	unsigned int total_length = 0, e = 0, f = 0, i = 0, ch, j = 0;
	char *string_final;
	char *array_arg[];
	va_list arguments;

	char * (*fun_array[])(va_list arguments) = {print_c};
	va_start(arguments, format);
	if (!format || !format[i] || (format[i] == '%' && !format[i + 1]))
		return (-1);
	for (; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			/*array of pointers to functions call with format[i]*/
			if (format[i] == 'c')
			{
				ch = 0;
				array_arg[j] = (*fun_array[ch])(arguments);
				j++;
				total_length++;
			}
		}
		else
			total_length++;
	}
	i = 0;
	j = 0;
	string_final = malloc(total_length);
	if (!string_final)
		return (-1);
	for (; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			string_final[f] = format[i];
			f++;
		}
		else
		{
			i++;
			while (array_arg[e][j])
			{
				string_final[f] = array_arg[e][j];
				j++;
				f++;
			}
			e++;
		}
	}
	write(1, string_final, total_length);
	va_end(arguments);
	return (0);
}

/**
 * print_c - prints char
 * @arguments: va_list
 * Return: string of 1 char
 */
char *print_c(va_list arguments)
{
	char *c = va_arg(arguments, char *);

	return (c);
}
