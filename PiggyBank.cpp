#include <iostream>

using namespace std;

struct stPiggyBankContent
{
	double Pennies = 1;
	double Nickels = 5;
	double Dimes = 10;
	double Quarters = 25;
	double Dollars = 100;
};

stPiggyBankContent ReadPiggyBankContent()
{
	stPiggyBankContent PiggyBankContent;

	cout << "Enter The total Pennies: ";
	cin >> PiggyBankContent.Pennies;

	cout << "\nEnter The total Nickels: ";
	cin >> PiggyBankContent.Nickels;

	cout << "\nEnter The total Dimes: ";
	cin >> PiggyBankContent.Dimes;

	cout << "\nEnter The total Quarters: ";
	cin >> PiggyBankContent.Quarters;

	cout << "\nEnter The total Dollars: ";
	cin >> PiggyBankContent.Dollars;

	cout << endl;

	return PiggyBankContent;
}

double CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
	double TotalPennies = PiggyBankContent.Pennies * 1
		+ PiggyBankContent.Nickels * 5
		+ PiggyBankContent.Dimes * 10
		+ PiggyBankContent.Quarters * 25
		+ PiggyBankContent.Dollars * 100;

	return TotalPennies;

}

int main()
{
	double TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());

	cout << "\nTotal Pennies = " << TotalPennies << endl << endl;
	cout << "Total Dollars = " << TotalPennies / 100.0 << endl << endl;

	return 0;
}