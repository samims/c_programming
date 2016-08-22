#include<stdio.h>

 int main(void)
 {
  int roll;
  float sub1,sub2,sub3,average,total;
  printf("Enter your roll number:\t");
  scanf("%d",&roll);
  printf("Enter your marks of three subjects:\n");
  scanf("%f %f %f",&sub1,&sub2,&sub3);
  total = (sub1+sub2+sub3);
  average = (total /3);

  printf("Your total marks is: %f\n\n",total );
  printf("Your average marks is:  %f\n\n",average );

  if (total>=60) {
    printf("Your grade is - 'A'\n\n" );
  }
  else if (total>=50) {
    printf("Your grade is - 'B'\n\n" );

  }

  else if(total>=40)
  {
    printf("Your grade 'C'\n\n");
  }

  else
  printf("Your grade is - 'A'\n\n" );

  return(0);

 }
