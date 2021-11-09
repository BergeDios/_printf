#include "main.h"

/**
 * get_func - selects correct function
 * @s: character identifier
 * Return: correct function
 */
int (*get_func(char s))(va_list, int)
{
	int i = 0;
	types ide[] = {
		{'c', print_c},
		{'s', print_s},
		{'\0', NULL}
	};

	while (ide[i].fi)
	{
		if (ide[i].fi == s)
			return (ide[i].func);
		i++;
	}
	return (NULL);
}
