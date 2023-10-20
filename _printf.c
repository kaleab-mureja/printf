#include "main.h"

/**
	* handle_formatting - prints according to format specifier
	* @specifier: specifier to handle
	* @ap: macro holding arguments
	* @fallback: fallback value for invalid format specifier
	* Description: prints according to format specifier
	* Return: int
*/
int handle_formatting(char specifier, va_list ap, char fallback)
{
	int length = 0;
	unsigned int binaryNum;

	switch (specifier)
	{
		case 'c':
			_putchar(va_arg(ap, int));
			length++;
			break;
		case 's':
			length += _raw_print(va_arg(ap, char *));
			break;
		case 'i':
		case 'd':
			length += _print_int(va_arg(ap, int));
			break;
		case 'b':
			binaryNum = toBinary(va_arg(ap, unsigned int));
			length += _print_int(binaryNum);
			break;
		case 'r':
			length += printReverseString(va_arg(ap, char *));
			break;
		case '%':
			_putchar(fallback);
			length++;
			break;
		default:
			_putchar(fallback);
			return (-1);

	}

	return (length);
}

/**
	* _printf - prints given string in specified format
	* @format: string to print with format specifiers included
	* Description: prints given string in specified format
	* Return: int
*/
int _printf(const char *format, ...)
{
	int i = 0;
	int length = 0;
	va_list ap;

	va_start(ap, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			length++;
		}
		else
		{
			int result = handle_formatting(format[i + 1], ap, format[i]);

			if (result == -1)
			{
				length++;
			}
			else
			{
				length += result;
				i++;
			}
		}
	}

	return (length);
}
