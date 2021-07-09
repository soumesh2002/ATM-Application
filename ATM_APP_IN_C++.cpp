// ATM_APP_IN_C++.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void showMenu()
{
	std::cout << "********Menu********" << std::endl;
	std::cout << "1. Check Balance" << std::endl;
	std::cout << "2. Deposit" << std::endl;
	std::cout << "3. Withdraw" << std::endl;
	std::cout << "4. Exit" << std::endl;
	std::cout << "********************" << std::endl;
}

int main()
{
	int option;
	double balance = 500;

	do {
		showMenu();
		std::cout << "Please choose an option: " << std::endl;
		std::cin >> option;

		switch (option)
		{
		case 1: std::cout << "Balance: " << "$" << balance << std::endl; break;

		case 2: std::cout << "Deposit Amount: " << std::endl;
			double depositAmount;
			std::cin >> depositAmount;
			balance += depositAmount;
			break;

		case 3: std::cout << "Withdraw Amount: " << std::endl;
			double withdrawAmount;
			std::cin >> withdrawAmount;
			if (withdrawAmount <= balance) balance -= withdrawAmount;
			else std::cout << "Not enough money" << std::endl;
			break;
		}
	} while (option != 4);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
