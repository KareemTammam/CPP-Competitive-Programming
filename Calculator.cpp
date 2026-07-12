#include <iostream>
#include <iomanip>

using namespace std;

enum enOperator
{
    Invalid = 0, Summation = '+', Subtraction = '-', Multiplication = '*', Division = '/'
};

double ReadNumber(string Message)
{
    double Number = 0;

    cout << Message;

    while (!(cin >> Number))
    {
        cin.clear();
        cin.ignore(20, '\n');

        cout << "Invalid Number, Try Again: ";
    }

    return Number;
}

enOperator DetermineOperator(string Message)
{
        char Operator;

        cout << Message << ": ";
        cin >> Operator;

        switch (Operator)
        {
        case '+':
            return Summation;

        case '-':
            return Subtraction;

        case '*':
            return Multiplication;

        case '/':
            return Division;

        default:
            return Invalid;
        }
}

void PrintOperatorResult(double FirstNumber, enOperator Operator, double SecondNumber)
{
    double Result = 0;

    switch (Operator)
    {
    case Summation:
        Result = FirstNumber + SecondNumber;
        break;

    case Subtraction:
        Result = FirstNumber - SecondNumber;
        break;

    case Multiplication:
        Result = FirstNumber * SecondNumber;
        break;

    case Division:

        if (SecondNumber == 0)
        {
            cout << "Cannot divide by zero" << endl;
            return;
        }

        Result = FirstNumber / SecondNumber;
        break;

    default:
        cout << "Invalid Operator" << endl;
        return;
    }

    cout << FirstNumber << " " << char(Operator) << " " << SecondNumber << " = "
        << fixed << setprecision(6) << Result << endl << endl;
}

int main()
{
	double FirstNumber = ReadNumber("Enter The First Number: ");

	enOperator Operator = DetermineOperator("\nWhat's Operator ?? ");

    if (Operator == Invalid)
    {
        cout << "\n\nInvalid Operator" << endl;
        return 0;
    }

	double SecondNumber = ReadNumber("\nEnter The Second Number: ");

    cout << "\n\n\n";

	PrintOperatorResult(FirstNumber, Operator, SecondNumber);
	
	return 0;
}