#include "main.h"
/**
 * print_c - returns char as string
 * @arguments: va_list
 * @f: position in s_semifinal
 * @total_length: length for final string
 * @s_semifinal: string copier
 * Return: string version of any char
 */
int print_c(va_list arguments, char *s_semifinal, int total_length, int f)
{
	char e;

	e = va_arg(arguments, int);
	if (e == '\0')
		return (1);
	s_semifinal[f] = e;
	total_length++;
	return (total_length);
}
/**
 * print_s - returns a string
 * @arguments: va_list
 * @s_semifinal: string copier
 * @total_length: length of final string
 * @f: position in s_semifinal
 * Return: string or null
 */
int print_s(va_list arguments, char *s_semifinal, int total_length, int f)
{

	char *s;
	int i = 0;

	if (arguments)
	{
		s = va_arg(arguments, char *);
		if (s == NULL)
			s = "(null)";
		for (; s[i] != '\0'; i++, f++, total_length++)
			s_semifinal[f] = s[i];
		return (total_length);
	}
	return (-1);
}
