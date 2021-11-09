#include "main.h"
/**
 * print_c - print char to buffer and return new length
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
	s_semifinal[f] = e;
	total_length++;
	return (total_length);
}
/**
 * print_s - pastes string and returns new length
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

	s = va_arg(arguments, char *);
	if (s == NULL)
		s = "(null)";
	for (; s[i] != '\0'; i++, f++, total_length++)
		s_semifinal[f] = s[i];
	return (total_length);
}
/**
 * print_d - paste int to buffer and return new length
 * @arguments: va_list
 * @s_semifinal: string copier
 * @total_length: length of string
 * @f: position in s_semifinal
 * Return: string or null
 */
int print_d(va_list arguments, char *s_semifinal, int total_length, int f)
{
	long int n = (long int)va_arg(arguments, int);

	total_length = recursive_d(n, s_semifinal, total_length, f);
	return (total_length);
}
/**
 * recursive_d - makes recrsion to print d to buffer
 * @n: va_arg int
 * @s_semifinal: string copier
 * @total_length: length of final string
 * @f: position in s_semifinal
 * Return: total length
 */
int recursive_d(long int n, char *s_semifinal, int total_length, int f)
{
	if (n < 0)
	{
		s_semifinal[f] = '-';
		return (recursive_d((n * -1), s_semifinal, total_length++, f) + 1);

	}
	if (n < 10)
	{
		s_semifinal[f] = n + '0';
		return (1);
	}
	total_length = recursive_d(n / 10, s_semifinal, total_length, f);
	s_semifinal[total_length] = (n % 10) + '0';
	return (total_length + 1);
}
