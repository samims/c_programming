#include <stdio.h>

int main(void)
{
  int i,n,fact=1;
  printf("Enter a number to calculate it's factorial: ");
  scanf("%d",&n);
  
  i=n;
  while(i>0){
	  fact = fact *i;
	  i--;
	  
	  
  }
  printf("%d!=%d",n,fact);
  
  return 0;
  
}
