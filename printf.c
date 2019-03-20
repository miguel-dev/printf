#include "holberton.h"

/**
 * format_c - print a character.
 * @parameter: parameter to be printed.
 *
 * Return: number of characters to be printed.
 */
int format_c(va_list parameter)
{
	char p;
	
	p = va_arg(parameter, int);
	write(1, &p, 1);
	return (1);
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
		write(1, &p[i], sizeof(char));
		i++;
	}
	return (i);
}

/**
 * format_i - printds an integer.
 * @parameter: parameter to be printed.
 *
 * Return: number of characters to be printed.
 */
int format_i(va_list parameter)
{
	long p;
	char *a;
	long i, j, v, size;

	p = va_arg(parameter, int);

	v = p;

	if (p < 0)
	{
		p = p * (-1);
		write(1, "-", sizeof(char));
	}

	size = 0;
	while (v)
	{
		v /= 10;
		size++;
	}

	a = malloc(sizeof(char) * size);

	i = 0;
	v = p;
	while (v)
	{
		a[i] = v % 10 + 48;
		v /= 10;
		i++;
	}

	j = i;
	while (j >= 0)
	{
	  if (a[j] != '\0')
	    write(1, &a[j], sizeof(char));
		j--;
	}
	return (i);
}

/**
 * select_format_func - selects format function.
 * @f: string indicating format.
 *
 * Return: pointer to a function.
 */
int (*select_format_func(const char *f))(va_list parameters)
{
	print_p p[] = {
		{"c", format_c},
		{"s", format_s},
		{"d", format_i},
		{"i", format_i},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (p[i].format)
	{
		if (*p[i].format == *f)
			return (p[i].function);
		i++;
	}
	return (0);
}

/**
 * _printf - prints following a format.
 * @format: format for producing output.
 * @...: Parameters of the function.
 *
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i, n;
	va_list parameters;
	int (*func)(va_list);

	va_start(parameters, format);

	if (!format)
		return (-1);

	n = 0;

	i = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			func = select_format_func(&format[i + 1]);
			if (func)
			{
				n += func(parameters);
				i++;
			}
			else
			{
				n += write(1, "%", sizeof(char*));
				if (format[i + 1] != '%')
					n += write(1, &format[i + 1], sizeof(char*));
			}
			if (!format[i + 1])
			{
				return (-1);
			}
		}
		else
		{
			n += write(1, &format[i] , sizeof(char));
		}
		i++;
	}
	return (n);
}
