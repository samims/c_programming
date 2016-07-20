#include <stdio.h>

int main(int argc, char const *argv[])
{
	int samim;
	int *s;

	s = &samim;
	printf("The address of 'samim' is %p\n",&samim );
	printf("The address of 'samim' is %p\n",s);
	return 0;
}
