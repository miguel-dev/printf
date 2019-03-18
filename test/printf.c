#include "holberton.h"
#include <stdio.h>

/**
 * _printf - prints following a format.
 * @fomat: format for producing output.
 * @...: Parameters of the function.
 *
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	int i, j, n = 0;
	va_list parameters;
	char* p;

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c' || format[i + 1] == 's')
			{
				n++;
			}
		}
		i++;
	}

	va_start(paramenters, n);

	p = va_arg(parameters, char*);

	j = 0;
	while (!p)
		

	if (!n)
		write(1, format, sizeof(char) * i);

	return (n);
}
