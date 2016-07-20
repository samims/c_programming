#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a;
	char b;
	float c;

	puts("Memory locations:");
	printf("A is at %p\n",&a);
	printf("A is at %p\n",&b);
	printf("A is at %p\n",&c);
	return 0;
}