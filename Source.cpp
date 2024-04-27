#include <iostream>
#include "FinanceInfo.h"


using namespace std;

int main() {
	char choice;
	FinanceInfo FinanceInfo;

	while(choice != 'q') {
		double investment;
		double monthlyDeposit;
		double interest;
		int years;

		//diplays the initial screen for the application
		cout << "********************************" << endl;
		cout << "***********Data Input **********" << endl;
		cout << "Initial Investment Amount: " << endl;
		cout << "Monthly Deposit: " << endl;
		cout << "Annual Interest Rate: " << endl;
		cout << "Number of Years: " << endl << endl;
		cout << "Press any key to continue" << endl;
		// choice here is used to wait for user input to continue
		cin >> choice;

		cout << "********************************" << endl;
		cout << "***********Data Input **********" << endl;
		cout << "Initial Investment Amount: $";
		cin >> investment;
		cout << "Monthly Deposit: $";
		cin >> monthlyDeposit;
		cout << "Annual Interest Rate: ";
		cin >> interest;
		cout << "Number of Years: ";
		cin >> years;

		cout << endl;

		cout << " press 'c': calculate interest" << endl;
		cout << "press 'q': quit application" << endl;
		cin >> choice;


		if (choice = 'c') {
			interest = FinanceInfo.CalculateInterest();
			cout << "The accrued interest is: $" << interest;
		}

		else if (choice = 'q') {
			exit(0);
		}

		else {
			cout << "Unrecognized input, try again" << endl;
		}


		return 0;

	}



















}











