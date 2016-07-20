#include <stdio.h>

int main()
{
	struct record{
		int account;
		float balance;
	};
	struct record my_bank; /*variable of the record */

	my_bank.account = 1038482;
	my_bank.balance = 4000.13;

  	printf("In my account %d I have %.2f\n",my_bank.account,my_bank.balance);

	return 0;
}
