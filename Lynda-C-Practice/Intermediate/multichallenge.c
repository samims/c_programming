#include <stdio.h>

int main()
{
	char names[5][10] = {
		"Mickey",
		"Minnie",
		"Goofy",
		"Pluto",
		"Pinocchio"
	};
	
	int x;
	
	for(x = 0; x<5; x++)
		printf("%s\n", names[x]);
	return(0);
}
