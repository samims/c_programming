/*Write a program to print following outputs in C language
1
22
333
4444
*/


#include<stdio.h>

int main(void){
    int  i,j,n;

    printf("Enter number:");
    scanf("%d",&n);

    for(i=1; i<=n;i++){
            for(j=1;j<=i;j++){
                  printf("%d",j);
            }
            putchar('\n');
    }
    return 0;
}
