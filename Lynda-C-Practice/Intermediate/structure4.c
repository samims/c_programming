#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	struct date
	{
		char name[32];
		int year;
		int month;
		int day;

	};
	struct person
	{
		char name[32];
		struct date birthday;
	} friend;
	//struct person friend;
	strcpy(friend.name,"Samim Sk");
	friend.birthday.year = 1993;
	friend.birthday.month = 9;
	friend.birthday.day = 26;

	printf("My friend %s was born in %d/%d/%d\n",friend.name, friend.birthday.year,friend.birthday.month,friend.birthday.day);

	return 0;
}
