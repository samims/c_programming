#include <stdio.h>

int main()
{
	int a;
	
	printf("Type an integer: ");
	scanf("%d",&a);
	printf("You typed %d. \n",a);
	if( a > 10)
	{
		printf("%d is greater than 10",a);
	}
	else if(a<10)
	{
		printf("%d is less than 10",a);
	}
	else
	{
		printf("%d is equal to 10",a);
	}
	return 0;
}
