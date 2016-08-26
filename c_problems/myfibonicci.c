/* fibo series
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{

	int a,b,i,n,x;
	i = a =0,b = 1;

	printf("Enter length of fibonicci: ");
	scanf("%d",&n);

	printf("%d\n",a );

	while(i<n)
	{
	    x = a;
		a = a +b;
		b = x;
		i++;

		printf("%d\n",a );
	}
  return 0;
}
