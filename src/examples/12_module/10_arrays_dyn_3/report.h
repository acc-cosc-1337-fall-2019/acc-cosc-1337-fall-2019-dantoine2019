//constructor use for loop to initialize account to increments of 10 balance (5 times)
//display iterate and display array
//free memory using a loop to delete an nullify

#include "bank_account.h"
//
//default constructor create dyanamic array of 5 Bank accounts
//display function iterate with an indexed for and display balance
//destructor free memory
class MyReport
{
public:
	MyReport();
	void display()const;
	~MyReport();
private:
	BankAccount** accounts;//point to pointer
	const int SIZE{ 5 };
};

