/*Write a program to accept roll no and marks
 of 3 subjects of a student, Calculate total of 3
 subjects and average in C language
 */

 #include<stdio.h>

 int main(void)
 {
  int roll;
  float sub1,sub2,sub3,average;
  printf("Enter your roll number:\t");
  scanf("%d",&roll);
  printf("Enter your marks of three subjects:\n");
  scanf("%f %f %f",&sub1,&sub2,&sub3);
  average = (sub1+sub2+sub3)/3;
  printf("The average of three subjects is- %f\n",average);

  return(0);

 }
