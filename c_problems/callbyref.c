/*Write a program to accept two numbers from user
 and swap their values using call by reference 
 method in C language */
 
 #include <stdio.h>
 
 void swap(int *a,int*b);
 
 int main()
 {
     int x,y;
     printf("Enter 2 numbers:");
     scanf("%d",&x);
     scanf("%d",&y);
     
     printf("You have typed %d and %d",x,y);
     swap(&x,&y);
     
     printf("\nAfter swapping the number is %d and %d",x,y);
     
     return 0;
 
 }
 
void swap(int *a,int*b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
    
}

 
