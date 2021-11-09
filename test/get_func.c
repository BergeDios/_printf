#include "main.h"

/**
 * get_func - selects correct function
 * @s: character identifier
 * Return: correct function
 */
int (*get_func(char s))(va_list)
{
	int i = 0;
	types ide[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};

	while (ide[i].fi)
	{
		if (ide[i].fi[0] == s)
			return (ide[i].func);
		i++;
	}
	return (NULL);
}
