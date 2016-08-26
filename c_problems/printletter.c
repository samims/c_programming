/*
ABCDE EDCBA
ABCD   DCBA
ABC     CBA
AB       BA
A         A
*/

#include <stdio.h>

int main(void)

{
	char i,j,k,n;
	int t=0;
	printf("Enter a letter:");
	scanf("%c",&n);
	
	for(i=n; i>='A';i--){
		//printf("%c",i);
		
		for(j='A';j<=i;j++)
			{
			printf("%c",j);
			}
		//printf("%c",i);
		t=0;
		for(k=i-t; k<=n; k++){
			printf("  ");
			t++;
		}
		
		for(k=j-1;k>='A';k--)
			{
			printf("%c",k);
			}
		printf("\n");
		}
}
