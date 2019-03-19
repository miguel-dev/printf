#include "holberton.h"

/**
 * format_c - prints a char
 *@parameter: parameter to be printed
 *
 *Return: number of chars printed
 */
int format_c(va_list parameter)
{
	char * p;
	int i = 0;

	p = va_arg(parameter, char *);
	while (p)
	{
		write(1, p, sizeof(char));
		i++;
	}
	return(i);
}



/**
 * format_s - prints a string.
 * @parameter: parameter to be printed.
 *
 * Return: number of characters to be printed.
 */
int format_s(va_list parameter)
{
	char *p;
	int i = 0;

	p = va_arg(parameter, char*);

	while (p[i])
	{
		write(1, p[i], sizeof(char));
		i++;
	}
	return (i);
}

/**
 * format_i - prints an integer.
 * @parameter: parameter to be printed.
 *
 * Return: number of characters to be printed.
 */

int format_i(va_list parameter)
{
	int *p;
	int i = 0;

	p = va_arg(parameter, int *);

	while (p[i])
	{
		write(1, p[i], sizeof(int));
		i++;
	}
	return (i);
}

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
	print_p p[] = {
		{"c", format_c},
		{"s", format_s},
		{"i", format_i},
		{NULL, NULL}
	};

	va_start(parameters, format);

	i = 0;
	j = 0;
	while (format && format[i])
	{
		if (format[i] = '%')
		{
			while (j < 3)
			{
				if (format[i] == p[j].format)
				{
					p[i].f;
				}
				j++;
			}
		}
	}

	if (!n)
		write(1, format, sizeof(char) * n);
}
