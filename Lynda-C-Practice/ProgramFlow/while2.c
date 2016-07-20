#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	int x,r;
	srand((unsigned)time(NULL)); /*seed randomizer */

	x = 10;

	while(x>0)
	{
		r = rand();
		printf("%2d\n",r%100 );//limit value upto 99
		x --;
	}


	return 0;
}