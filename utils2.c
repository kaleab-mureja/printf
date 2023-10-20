#include "main.h"
#include <stdio.h>

/**
	* toBinary - converts a decimal to a binary
	* @num: number to convert to binary
	* Description: converts a decimal to a binary
	* Return: int
*/
int toBinary(unsigned int num)
{
	long binaryNum = 0;
	int rem;
	int base = 1;

	while (num != 0)
	{
		rem = num % 2;
		binaryNum += rem * base;
		base *= 10;
		num = num / 2;
	}

	return (binaryNum);
}

/**
	* printReverseString - prints the given string in reverse
	* @string: string to be reversed
	* Description: prints the given string in reverse
	* Return: int
*/

int printReverseString(char *string)
{
	int i = 0;
	int length;

	if (string == NULL)
		string = "(null)";

	while (string[i + 1] != '\0')
		i++;

	length = i + 1;

	while (i >= 0)
	{
		_putchar(string[i--]);
	}

	return (length);
}
