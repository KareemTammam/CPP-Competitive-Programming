#include<iostream>
#include<string>

using namespace std;

void ReadNumbers(int &Number1, int &Number2)
{
	cout << "Enter First Number : ";
	cin >> Number1;

	cout << "\nEnter First Number : ";
	cin >> Number2;

	cout << endl;
}

void PrintNumbersBeforeSwaps(int Number1, int Number2)
{
	cout << endl << "Numbers Before Swapping : " << endl << endl;

	cout << "The First Number = " << Number1 << endl;

	cout << "The Second Number = " << Number2 << endl;
}

void SwapNumbers(int& Number1, int& Number2)
{
	int Temp;

	Temp = Number1;
	Number1 = Number2;
	Number2 = Temp;
}

void PrintNumbersAfterSwap(int Number1, int Number2)
{
	cout << endl << "Numbers After Swapping : " << endl << endl;

	cout << "The First Number = " << Number1 << endl;

	cout << "The Second Number = " << Number2 << endl;
}

int main()
{
	int Number1, Number2;

	ReadNumbers(Number1, Number2);
	PrintNumbersBeforeSwaps(Number1, Number2);
	SwapNumbers(Number1, Number2);
	PrintNumbersAfterSwap(Number1, Number2);

	return 0;
}