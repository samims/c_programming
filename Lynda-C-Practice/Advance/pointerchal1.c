#include <stdio.h>

int main()
{
	char sam;
	char *s;
	
	sam = 'a';
	s = &sam;
	
	printf("The address of 'sam' is %p\n",&sam);
	printf("the contents of 'sam' is %c\n",sam);
	
	printf("The address of 's' is %p\n",s);
	printf("The content of 's' is %c\n",*s);
	
	return 0;
	
	
}
