// largest between three number 
#include <stdio.h>

int main(void)
{
	int a,b,c;

	printf("Enter three number:\n");
	scanf("%d%d%d\n",&a,&b,&c);

	if (a>b && b>c)
	{
		printf("%d is largest\n",a );
	}

	else if(a<b && c<a)
	{
		printf("%d is largest\n",b);
	}

	else
		printf("%d is the largest",c );

	return 0;

}
