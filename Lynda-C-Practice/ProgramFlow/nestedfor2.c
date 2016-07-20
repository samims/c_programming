#include <stdio.h>

int main(int argc, char const *argv[])
{
	int alpha,numeric;

	for (alpha = 'A'; alpha<'K'; alpha++)
	{
		for (numeric= 0; numeric < 10; numeric++)
		{
			printf("%c%d\t", alpha,numeric);
			
		}
		putchar('\n');
	}
	return 0;
}