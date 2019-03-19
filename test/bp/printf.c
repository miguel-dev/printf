#include "holberton.h"

/**
 * _printf - prints following a format.
 * @fomat: format for producing output.
 * @...: Parameters of the function.
 *
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	int i, k, n = 0;
	char *p;
	char *s;
	va_list parameters;


	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				n++;
			}
		}
		i++;
	}
	printf("%d, %d\n", i, n);
	va_start(parameters, format);
	p = malloc(sizeof(char *) * i);

	for (k = 0; k < i; k++)
	{
		s = va_arg(parameters, char *);
		if (format[k] == '%')
		{
			p[k] = s;
			k++;
		}
		if (k < i)
			p[k] = format[k];
	}
	printf("%s", p);
/*	write(1, p, sizeof(char) * (i + n));*/

}