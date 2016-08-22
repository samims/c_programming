/*Write a program to print following
outputs in C language
*
**
***
****
*/

#include <stdio.h>

int main(void)
{
  int i,j,n;
  printf("Enter number: \n");
  scanf("%d",&n);

  for(i =0;i<=n;i++){
    for(j=0;j<i;j++){
      putchar('*');
    }
    putchar('\n');
  }
  return 0;
}
