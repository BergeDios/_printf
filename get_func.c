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
		{'c', print_c},
		{'s', print_s},
		{'d', print_d},
		{'i', print_d},
		{'r', print_r},
		{'R', print_rot},
		{'b', print_bi},
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
