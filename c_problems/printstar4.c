/*wap to print
***
**
*

*/

#include<stdio.h>

int main(){
  int i,j,n;
  printf("Enter the number:\n");
  scanf("%d",&n );
  putchar('\n'); //to display the output better
  for(i=n;i>0;i--)
  {
    for(j=i;j>0;j--)
    {
      putchar('*');
    }
    putchar('\n');
  }
  return(0);
}
