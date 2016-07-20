#include <stdio.h>

int main()
{
	int sam;
	int *s;
	
	sam = 700;
	s = &sam;
	
	printf("The address of 'sam' is %p\n",&sam);
	printf("the contents of 'sam' is %d\n",sam);
	
	printf("The address of 's' is %p\n",s);
	printf("The content of 's' is %d\n",*s);
	
	return 0;
	
	
	}
