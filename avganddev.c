#include<stdio.h>

int main()
{
    int num,sum,i,count,avg,devia;
    sum =0;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    i=1;
    sum,count = 0;
    while(i<=num)
    {
        sum = sum+i;
        
   
        i++;
        count++;
    }
	
	avg = sum/count;
	
	printf("%d\n",avg);
	
	
	
	return 0;
	
}
