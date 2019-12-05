
#include "report.h"
#include<iostream>

MyReport::MyReport()
	: accounts {new BankAccount[SIZE]}//save 5 memory addresses
{
	accounts = new BankAccount*[SIZE];
	std::cout << "Create memory\n";
	//creates dynamic memory(heap) for each of 5 addresses
	for (int i = 0; i < SIZE; ++i)
	{
		accounts[i] = new BankAccount(i * 10);//calls default constructor
	}
}

void MyReport::display() const
{
	std::cout << "process\n";
	for (int i = 0; i < SIZE; ++i)
	{
		std::cout << accounts[i]->get_balance() << "\n";
	}

}

MyReport::~MyReport()
{
	for (int i = 0; i < SIZE; ++i)
	{
		delete accounts[i];
	}
	delete[] accounts;
}

