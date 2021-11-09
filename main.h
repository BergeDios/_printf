#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct types - struct for types
 *
 * @fi: format identifier
 * @func: pointer to function associated with identifier
 */

typedef struct types
{
	char fi;
	int (*func)(va_list arguments);
} types;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
char *_strcpy(char *dest, const char *src);
int print_c(va_list arguments);
int print_s(va_list arguments);
int print_d(va_list arguments);
int print_r(va_list arguments);
int print_rot(va_list arguments);
int recursive_d(long int n);
char *_strcat(char *dest, char *src);
int (*get_func(char s))(va_list);

#endif
