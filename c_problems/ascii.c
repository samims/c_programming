/*Write a program to print digits, alphabets in capital and lower case in C language */

#include <stdio.h>

int main()
{
    int x;
    
    for(x= 65; x <= 90; x++){
        printf("%c\t",x);
    }
    
    printf("\n\n");
    
    for(x = 97; x<=122; x++){
        printf("%c\t",x);
    }
    
    printf("\n\n");
    
    for(x = 48; x <=57; x++)
    {
        printf("%c\t",x);
    }
    printf("\n\n");
    
    return 0;
}
