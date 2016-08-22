
/*ABCDE EDCBA
ABCD DCBA
ABC CBA
AB BA
A A
*/

#include <stdio.h>

int main(void)

{
	char i,j,k,n;
	printf("Enter a letter:");
	scanf("%c",&n);
	
	for(i=n; i>='A';i--){
		//printf("%c",i);
		
		for(j='A';j<=i;j++){
			printf("%c",j);
			
			
		}
		putchar(' ');
		
		for(k=j-1;k>='A';k--)
		{
			printf("%c",k);
		}
		printf("\n");
	}
	
	return 0;
		
}
	
