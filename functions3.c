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
