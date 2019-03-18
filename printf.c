#include <holberton.h>

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
