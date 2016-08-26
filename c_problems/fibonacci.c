
/* 1,1,2,3,5,8,13,21 */
#include <stdio.h>

long fibo(int a);

int main()
{	int index ;
	scanf("%d",&index);


	printf("Result %ld\n",fibo(index));

	return 0;
}


long fibo(int a)
{
	if ( a == 1 || a == 2){
		return 1;	
	}
	
	else
		return fibo(a-1)+ fibo(a-2);
		
}
