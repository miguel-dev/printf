#include <holberton.h>

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
		i++:
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
	int *p;
	int i = 0;

	p = va_arg(parameter, int *);

	while (p[i])
	{
		write(1, va_arg(p[i], int);
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
	int i, n = 0;
	va_list parameters;
	print_p p[] = {
		{"c", format_c},
		{"s", format_s},
		{NULL, NULL}
	};

	va_start(parameters, format);

	i = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				
				n++;
			}	
			else if (format[i + 1] == 's')
			{
				n++;
			}
		}
		i++;
	}

	if (!n)
		write(1, format, sizeof(char) * n);
}
