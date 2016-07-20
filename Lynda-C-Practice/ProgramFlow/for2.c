#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int coloumn, r;

	srand((unsigned)time(NULL));

	for(coloumn=0; coloumn<10; coloumn++)
	{
		r = rand();
		printf("%2d\t",r%100 );
	}
	putchar('\n');
	return 0;
}