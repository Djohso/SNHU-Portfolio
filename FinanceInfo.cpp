#include "FinanceInfo.h"

void FinanceInfo::SetData(int numyears, double interestRate, double initialAmount, double deposit) {
	numyears = numyears;
	interestRate = interestRate;
	initialAmount = initialAmount;
	deposit = deposit;
}

void FinanceInfo::SetDeposit(double deposit) {
	deposit = deposit;
}

double FinanceInfo::CalculateInterest() {
	double initialAmount;
	double interestRate;
	double total;
	double monthlyDeposit;
	double temp;
	//returns the total value for the interest accrued based on calculations
	temp = initialAmount + monthlyDeposit;
	total = temp * ((interestRate / 100) / 12);

	return total;
}

int FinanceInfo::GetData() {
	return  interestRate, initialAmount, deposit, numyears;
}






