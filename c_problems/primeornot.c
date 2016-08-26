// prime or not

#include <stdio.h>

int main(void)
{
    int i,num,modulo,count=0;

    printf("Enter the number:");
    scanf("%d",&num);

    for(i=2;i<=num; i++)
    {
		modulo=num%i;
	 if(modulo==0)
	 {
		 count++;
		 }
	 }

	 if(count>1) {
  	 printf("%d is not prime number",num);
		 }

	else
	printf("%d is  prime number.",num);

  return 0;
}
