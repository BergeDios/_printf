#include "main.h"

/**
 * _printf - produces output acccording to a format
 * @format: character string composed of 0 or more directives
 * Return: total length of final string
 */
int _printf(const char *format, ...)
{
	unsigned int total_length = 0, i = 0, ch, p2;
	char *string_final;
	char *array_arg[];
	va_list arguments;

	void (*fun_array[])(va_list arguments) = {c, s};

	va_start(arguments, format);

	if (!format || format[i] == NULL ||
			(format[i] == '%' && format[i + 1] == NULL))
		return (-1);
	for (; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			/*array of pointers to functions call with format[i]*/
			if (format[i] == 'c')
			{
			}
		}
		else
			total_length++;

	}
	char *string_final = malloc(total_length);

	if (!string_final)
		return (NULL);
	_strcpy(string_final, format);
	write(1, string_final, total_length);
}
/**
 * c - prints char
 * @arguments: va_list
 * Return: void
 */
void c(va_list arguments)
{
	char *c = va_arg(arguments, char);

	if (_strlen(c) == 1)
		_putchar(c);
}
