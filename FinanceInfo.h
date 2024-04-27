#pragma once
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

class FinanceInfo {
public:
	void SetData(int, double, double, double);
	void SetDeposit(double);
	int GetData();
	double CalculateInterest();

private: 
	int numyears = 0;
	double interestRate = 0.0;
	double initialAmount = 0.0;
	double deposit = 0.0;

};

