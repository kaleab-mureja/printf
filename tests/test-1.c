#include <stdio.h>
#include "../main.h"
int main ()
{
	int len;
	int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");

	_printf("Length: [%i, %i]\n", len, len2);
	printf("Length: [%i, %i]\n", len, len2);

	len = _printf("Hello there %c\n", 'M');
	len2 = printf("Hello there %c\n", 'M');

	_printf("Length: [%i, %i]\n", len, len2);
	printf("Length: [%i, %i]\n", len, len2);

	len = _printf("Hello there %c\n", NULL);
	len2 = printf("Hello there %c\n", NULL);

	_printf("Length: [%i, %i]\n", len, len2);
	printf("Length: [%i, %i]\n", len, len2);

	len = _printf("Hello there %s\n", "Mike");
	len2 = printf("Hello there %s\n", "Mike");

	_printf("Length: [%i, %i]\n", len, len2);
	printf("Length: [%i, %i]\n", len, len2);

	len = _printf("This is a confusing string %s\n", "This is a %i string", 10);
	len2 = printf("This is a confusing string %s\n", "This is a %i string", 10);

	_printf("Length: [%i, %i]\n", len, len2);
	printf("Length: [%i, %i]\n", len, len2);

	_printf("This is a test %s\n");
	/* printf("This is a test %s\n"); */

	len = _printf("Hello there %s\n", NULL);
	len2 = printf("Hello there %s\n", NULL);

	_printf("Length: [%i, %i]\n", len, len2);
	printf("Length: [%i, %i]\n", len, len2);

    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

	_printf("Length: [%i, %i]\n", len, len2);
	printf("Length: [%i, %i]\n", len, len2);

	len = _printf("%\n");
	len2 = printf("%\n");

	_printf("Length: [%i, %i]\n", len, len2);
	printf("Length: [%i, %i]\n", len, len2);

	return 0;
}
