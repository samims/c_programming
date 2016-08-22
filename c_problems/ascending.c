/*
 Write a program to accept three
 numbers from user and print them
 in ascending and decending order in C language */

#include<stdio.h>

int main(void)
{
  int a,b,c;

  printf("Enter three number: \n" );
  scanf("%d%d%d", &a,&b,&c );

  if ((a>b) && (b>c))
  {
    printf("The ascending order is - %d %d %d\n",c,b,a );
    printf("and descending order is %d %d %d \n",a,b,c);
  }

  else if ((a>b) && (c>b))
  {
     if (a>c)
     {
     printf("The ascending order  is:  %d\t%d\t%d\n",b,c,a );
     printf("and descending order is: %d\t%d\t%d \n",a,c,b );
     }
     else
     {
     printf("The ascending order  is:  %d\t%d\t%d\n",b,a,c );
     printf("and descending order is:  %d\t%d\t%d\n",c,a,b );
     }
 }

  else if ((b>a) && (c>a))
  {
    if (c>b) {
      printf("The ascending order  is:  %d\t%d\t%d\n",a,b,c );
      printf("and descending order is: %d\t%d\t%d \n",c,b,a );
    }
    else{
      printf("The ascending order  is:   %d\t%d\t%d\n",a,c,b );
      printf("and descending order is:  %d\t%d\t%d \n",b,c,a );

    }
  }

  else{
    printf("The ascending order  is:  %d\t%d\t%d\n",c,a,b );
    printf("and descending order is: %d\t%d\t%d \n",b,a,c);

  }

  return 0;
}
