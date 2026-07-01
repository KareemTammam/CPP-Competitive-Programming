#include<iostream>
#include<string>

using namespace std;

void ReadNumbers(int& Number1, int& Number2, int& Number3)
{
	cout << "Enter First Number : ";
	cin >> Number1;

	cout << "\nEnter Second Number : ";
	cin >> Number2;

	cout << "\nEnter Third Number : ";
	cin >> Number3;

	cout << endl;

}

int SumOfThreeNumbers(int Number1, int Number2, int Number3)
{
	return Number1 + Number2 + Number3;
}

void PrintSum(int Summetion)
{
	cout << endl;

	cout << "Summetion OF Three Numbers = " << Summetion << endl;
}

int main()
{
	int Number1, Number2, Number3;

	ReadNumbers(Number1, Number2, Number3);

	PrintSum(SumOfThreeNumbers(Number1, Number2, Number3));

	return 0;
}