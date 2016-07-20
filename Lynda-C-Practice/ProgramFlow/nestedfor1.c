#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int row, coloumn, r;

	srand((unsigned)time(NULL));

	for(row = 0; row<10;row++)
	{
		for(coloumn=0;coloumn<10;coloumn++)
		{
			r = rand();
			printf("%2d\t",r%100 );
		}
		putchar('\n');
	}

	return 0;
}