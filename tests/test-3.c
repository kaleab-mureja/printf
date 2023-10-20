#include "../main.h"
#include <stdio.h>

int main ()
{
	/* _printf("%b\n", 98); */
	/* _printf("%b\n", 1000); */
	/* _printf("%b\n", NULL); */
	/* _printf("%b\n", -20); */

	int len = _printf("%r\n", "Reverse this string");
	_printf("Length is %i\n", len);
	return 0;
}
