#include <iostream>
#include <vector>
#include "atm.h"
#include "bank_account.h"
using std::cout; using std::vector; using std::cin;

int main()
{
	BankAccount a;
	BankAccount b = a;
	display(a);//class friend function
	//scan card enter pin
	//get customer record from database into a vector
	vector<BankAccount> accounts{ BankAccount(500), BankAccount(600),
	BankAccount(1000) };
	BankAccount account(9000);
	ATM atm(accounts[0]);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();
	cin >> a;
	cout << a;// overload operator 

	return 0;
}