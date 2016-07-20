#include <stdio.h>

int main()
{
	char a;
	
	puts("Vacation option: ");
	puts("A - Airfare");
	puts("B - Hotel");
	puts("C - Rental Car");
	
	scanf("%c",&a);
	
	switch(a)
	{
		case 'A':
		case 'a':
			{
				puts("You have selected the aircraft");
			}
		break;
		case 'B':
		case 'b':
			{
				puts("You have selected the Hotel");
			}
		break;
		case 'C':
		case 'c':
			{
				puts("You have selected the Rental Car");
			}
		break;
		default:
			{
				puts("Invalid Choice");
			}
		}
	return 0;
}
		
