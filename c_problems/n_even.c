/*
Write a Program to print first n even
 numbers in C language */

 #include <stdio.h>

 int main(void){
   int i, n;
   printf("Enter the limit: \n" );
   scanf("%d",&n );
   i = 0;
   printf("The even numbers are: " );
   while (i<=n) {
     if(i%2 !=0){
       printf("'%d' ",i );
     }
     i++;
   }
 }
