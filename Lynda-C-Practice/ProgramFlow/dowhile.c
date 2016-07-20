 #include <stdio.h> /*stdio*/

int main(int argc, char const *argv[])
{
	char ch;

	ch = 'A';

	do
	{
		putchar(ch);
		ch++;
	}
	while(ch!='Z'+1);
	putchar('\n');
	
	return 0;
}