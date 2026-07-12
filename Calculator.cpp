#include <iostream>
#include <iomanip>

using namespace std;

enum enOperator 
{ 
	Summetion = '+', Subtraction = '-', Multiplication = '*', Division = '/' 
};

double ReadNumber(string Message)
{
	double Number = 0;

	cout << Message;
	cin >> Number;

	return Number;
}

enOperator DetermineOperator(string Message)
{
	char Operator = '+';

	cout << Message << ": ";
	cin >> Operator;

	return enOperator(Operator);
}

void PrintOperatorResult(double FirstNumber, enOperator Operator, double SecondNumber)
{
	if (Operator == '+')
	{
		cout << FirstNumber << " " << char(Operator) << " " << SecondNumber << " = "
			<< fixed << setprecision(6) << FirstNumber + SecondNumber;

		cout << endl << endl;
	}
	else if (Operator == '-')
	{
		cout << FirstNumber << " " << char(Operator) << " " << SecondNumber << " = "
			<< fixed << setprecision(6) << FirstNumber - SecondNumber;

		cout << endl << endl;
	}
	else if (Operator == '*')
	{
		cout << FirstNumber << " " << char(Operator) << " " << SecondNumber << " = "
			<< fixed << setprecision(6) << FirstNumber * SecondNumber;

		cout << endl << endl;
	}
	else if (Operator == '/')
	{
		cout << FirstNumber << " " << char(Operator) << " " << SecondNumber << " = "
			<< fixed << setprecision(6) << FirstNumber / SecondNumber;

		cout << endl << endl;
	}
}

int main()
{
	double FirstNumber = ReadNumber("Enter The First Number: ");

	enOperator Operator = DetermineOperator("\nWhat's Operator ?? ");

	double SecondNumber = ReadNumber("\nEnter The Second Number: ");

	cout << endl << endl << endl;

	PrintOperatorResult(FirstNumber, Operator, SecondNumber);
	
	return 0;
}