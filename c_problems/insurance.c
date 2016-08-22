#include <stdio.h>
#include <ctype.h>


int main(void)
{
  int age;
  char gender,maritalstatus;

  printf("Type your age: \n");
  scanf("%d",&age);
  printf("Type your gender:(F or M)\n" );
  scanf("%c",&gender);
  printf("Type your maritalstatus(example: M,U)\n" );
  scanf("%c",&maritalstatus );

  if((maritalstatus == 'M'))
  {
    printf("You are insured");
  }

  else
  {
    if (gender == 'm')
    {
      if ((maritalstatus == 'U')&&(age>=30))
      {
        printf("You are insured.\n" );
      }
      else{
      printf("You are not insured \n" );
      }

    }
    else if((gender == 'f'))
    {
      if (age>=25) {
        printf("You are insured!\n" );
      }
    }
  }
  return 0;
}
