#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	/*len = _printf("%s", "This sentence is retrieved from va_args!\n");
	_printf("\n%i", len);*/
  /*unsigned int ui;
	void *addr;

		len = _printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("%%");
	_printf("Length:[%d, %i]\n", len, len);*/
  	len = _printf("%d\n", 1234);
	/*	_printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);*/
	printf("\n%i\n", len);
	/*	_printf("String:[%s]\n", "I am a string !");
		_printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	_printf("Unknown:[%r]\n");
	_printf("%c", 'a');*/
	return (0);
}
