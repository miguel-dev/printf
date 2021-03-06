#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct print - connects the format with the parameter.
 * @format: format of the parameter.
 * @function: pointer to the function to printed.
 *
 * Description: Structure linking each parameter with it's format.
 */

typedef struct print
{
	char *format;
	int (*function)(va_list parameter);
} print_p;

int format_c(va_list parameter);

int format_s(va_list parameter);

int format_i(va_list parameter);

int (*select_format_func(const char *))(va_list parameter);

int _printf(const char *format, ...);

#endif
