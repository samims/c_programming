/* wap to print table of a number of user's choice */

#include <stdio.h>
int main(void)
{
  int i,n,result;
  printf("Enter a number:\n" );
  scanf("%d",&n);
  i=0;

  while(i<=10){
    printf("%d * %d = %d\n",n,i,n*i );
    i++;
  }
return 0;
}
