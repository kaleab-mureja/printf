#include "main.h"

/**
	* _raw_print - prints string without checking format specifiers
	* @string: string to be printed
	* Description: prints string without checking format specifiers
	* Return: length of string
*/

int _raw_print(char *string)
{
	int i = 0;

	if (string == NULL)
	{
		string = "(null)";
	}

	for (; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}

	return (i);
}

/**
	* _get_base - get the base of a number
	* @num: number to get the base of
	* Description: get the base of a number
	* Return: int
*/

int _get_base(int num)
{
	int length = 0;

	if (num == 0)
		return (length);

	while (num / 10 != 0)
	{
		num /= 10;
		length++;
	}

	return (length + 1);
}

/**
	* _pow - gets the output of the number raised to an exponent
	* @num: number
	* @exponent: exponent
	* Description: gets the output of the number raised to an exponent
	* Return: int
*/

int _pow(int num, int exponent)
{
	if (exponent == 0)
	{
		return (1);
	}
	if (exponent > 0)
	{
		return (num * _pow(num, exponent - 1));
	}

	return (-1);
}

/**
	* _print_int - prints a number using _putchar
	* @num: number to print
	* Description: prints a number using _putchar
	* Return: void
*/

int _print_int(int num)
{
	int base;
	int curNum;
	int length = 0;
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		length++;
	}
	else
	{
		length += _get_base(num);
		i = length;

		if (num < 0)
		{
			_putchar('-');
			num *= -1;
			length++;
		}
		while (i > 0)
		{
			base = --i;
			curNum = num / _pow(10, base);

			num = num - (curNum * _pow(10, base));
			_putchar('0' + curNum);
		}
	}

	return (length);
}

/**
	* _print_double - prints the provided double
	* @num: number to print
	* Description: prints the provided double
	* Return: void
*/
void _print_double(double num)
{
	int base;
	int length;
	int curNum;

	if (num == 0)
	{
		_putchar('0');
	}
	else
	{
		length = _get_base(num);
		while (length > 0)
		{
			base = --length;
			curNum = num / _pow(10, base);

			num = num - (curNum * _pow(10, base));
			_putchar('0' + curNum);
		}
	}

}
