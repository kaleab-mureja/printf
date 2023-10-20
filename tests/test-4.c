#include <stdio.h>
#include "../main.h"

#define TEST_FORMAT(format, ...) {\
	printf("%cTest %d\n", tests > 1 ? '\n' : '\0', tests); \
	len1 = _printf(format, __VA_ARGS__); \
	len2 = printf(format, __VA_ARGS__); \
	printf("Len: [%d, %d]\n", len1, len2); \
	tests++; \
}

/**
 * main - tests the _printf function.
 * gcc -Wall -Werror -Wextra -pedantic -std=gnu99 *.c
 *
 * Return: Always 0.
 */
int main(void)
{
	int tests = 1, len1 = 0, len2 = 0;

	/* _printf("Minutes: %-4d| Seconds: %s\n", 34, "12s"); */
	/* _printf("Temperature: %.3f%c\n", 27.256, 'C'); */
	/* len1 = _printf("foo%+34.3k", 34); */
	/* printf("err: %d\n", len1); */
	TEST_FORMAT("foo: %d, %x\n", 23, 19)
	TEST_FORMAT("foo: %07d, %x\n", 23, 19)
	return (0);
}
