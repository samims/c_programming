#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	time_t now;
	struct tm *right_now;

	time(&now);
	right_now = localtime(&now);

	printf("Today is %d/%d at %d:%2 d\n", 
		right_now->tm_mon,
		right_now->tm_mday,
		right_now->tm_hour,
		right_now->tm_min
		);
	return 0;
}