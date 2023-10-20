#include "../main.h"
#include <stdio.h>

int main ()
{
	int len;
	int len2;

	len = _printf("This contains the number %i\n", 988);
	len2 = printf("This contains the number %i\n", 988);

	_printf("Length: [%i, %i]\n", len, len2);
	printf("Length: [%i, %i]\n", len, len2);

	len = _printf("This contains the number %i\n", -400);
	len2 = printf("This contains the number %i\n", -400);

	_printf("Length: [%i, %i]\n", len, len2);
	printf("Length: [%i, %i]\n", len, len2);

	len = _printf("This is number %i\n", NULL);
	len2 = printf("This is number %i\n", NULL);

	_printf("Length: [%i, %i]\n", len, len2);
	printf("Length: [%i, %i]\n", len, len2);

	_printf("This is a test %d\n", "hello");
	printf("This is a test %d\n", "hello");

	return 0;
}
