#include <stdio.h>

void func(const char *);

const char *str = "R_272";

void main(void)
{
	func(str);
}

void func(const char *str)
{
	printf("%s\n", str);
	return;
}

