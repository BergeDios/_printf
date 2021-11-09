#include "main.h"
/**
 * print_rot - prints encrypted in rot13
 * @arguments: va_list
 * Return: legnth or null
 */
int print_rot(va_list arguments)
{
	char *s;
	unsigned int i, j;
	int count = 0;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	s = va_arg(arguments, char *);
	if (s == NULL)
		_printf("(null)");
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphabet[j] != '\0'; j++)
		{
			if (s[i] == alphabet[j])
			{
				_putchar(rot13[j]);
				count++;
				break;
			}
			if (!alphabet[j])
			{
				_putchar(s[j]);
				count++;
			}
		}
	}
	return (count);
}
/**
 * print_bi - prints int to binary
 * @arguments: va_list
 * Return: length or null
 */
int print_bi(va_list arguments)
{
	unsigned int i = 0, num = va_arg(arguments, int);

	if (num > 0)
		i = recursion_b(num);
	return (i);
}
/**
 * recursion_b - prints int to binary
 * @num: unsigned int argument
 * Return: int or null
 */
int recursion_b(unsigned int num)
{
	int i = 0;

	if (num > 0)
	{
		i += recursion_b(num / 2);
		i += _putchar((num % 2) + '0');
	}
	else
		return (-1);
	return (i);
}
