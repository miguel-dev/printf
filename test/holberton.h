#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/**
 * struct print - connects the format with the parameter.
 * @format: format of the parameter.
 * @parameter: parameter to be printed.
 *
 * Description: Structure linking each parameter with it's format.
 */

typedef struct print
{
	char *format;
	int (*f)(va_list parameter);
} print_p;

int format_c(va_list parameter);

int format_s(va_list parameter);

int format_i(va_list parameter);

int _printf(const char *format, ...);

#endif
