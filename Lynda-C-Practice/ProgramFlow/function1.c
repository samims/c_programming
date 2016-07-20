#include <stdio.h>

void blorf(void);

int main(int argc, char const *argv[])
{
	puts("The main() function is always runs first");
	blorf();
	blorf();
	puts("Thanks, blorf()");

	return 0;
}

void blorf(void)
{
	puts("The blorf() function runs when it's called");
}