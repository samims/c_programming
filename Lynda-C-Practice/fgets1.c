#include<stdio.h>

int main()
{
    char input[64]; //63 and null
    fgets(input,64,stdin);
    puts("Thank you! Here are your instruction:");
    puts(input);

    return 0;
}
