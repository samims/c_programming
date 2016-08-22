/*
print like
a
bb
ccd
dddd
*/
#include<stdio.h>

int main(void)
{
    char i,j,letter;
    puts("Type the letter: ");
    scanf("%c",&letter );
    for(i='a';i<=letter;i++){
        for(j ='a';j<=i;j++ ){
            putchar(j);
        }
        putchar('\n');
    }

    return 0;

}
