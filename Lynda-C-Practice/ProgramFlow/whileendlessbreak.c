#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 0;
	while(1)
	{
		puts("Here I go...!");
		a++;
		if (a>10)
			break;
	}
	return 0;
}