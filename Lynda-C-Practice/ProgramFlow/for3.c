#include <stdio.h>

int main(int argc, char const *argv[])
{
	char ch,t;
	printf("Type a letter 'a' to 'z': \n" );
	scanf("%c",&ch);

	for (int t ='a'; t < 'z'; t++)
	{
		putchar(t);
		if(t ==ch)
			break;
	}
	putchar('\n');

	return 0;
}