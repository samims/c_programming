
/*
1
11
121
1231
12341
*/

#include <stdio.h>

int main()
{
    int i,j,n;
	
    printf("Enter the number: ");
    scanf("%d",&n);
    
    for(i=0;i<=n;i++)
    {
		for(j=1;j<=i;j++){
		    printf("%d",j);
		}
		printf("1");
		printf("\n");
	}
	return 0;
	
}
	
