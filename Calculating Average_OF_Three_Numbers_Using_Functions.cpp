#include<iostream>
#include<string>

using namespace std;

void ReadNumbers(float& Number1, float& Number2, float& Number3)
{
	cout << "Enter First Number : ";
	cin >> Number1;

	cout << "\nEnter Second Number : ";
	cin >> Number2;

	cout << "\nEnter Third Number : ";
	cin >> Number3;

	cout << endl;

}

float SumOfThreeNumbers(float Number1, float Number2, float Number3)
{
	return Number1 + Number2 + Number3;
}

void CalculateAverage(float Number1, float Number2, float Number3)
{
	int Average = (float)(Number1 + Number2 + Number3) / 3.0;

	cout << endl << "Average OF Three Numbers = " << Average << endl;
}

void PrintSum(float Summetion)
{
	cout << endl;

	cout << "Summetion OF Three Numbers = " << Summetion << endl;
}

int main()
{
	float Number1, Number2, Number3;

	ReadNumbers(Number1, Number2, Number3);

	PrintSum(SumOfThreeNumbers(Number1, Number2, Number3));

	CalculateAverage(Number1, Number2, Number3);

	return 0;
}