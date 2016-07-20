#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	time_t now;
	time(&now);
	printf("The current time is %s\n",ctime(&now));
	return 0;
}