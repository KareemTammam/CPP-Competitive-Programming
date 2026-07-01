#include<iostream>
#include<string>

using namespace std;

void ReadThreeNumbers(float&Number1 , float&Number2 , float&Number3)
{
	cout << "Enter The First Number : ";
	cin >> Number1;

	cout << "\nEnter The Second Number : ";
	cin >> Number2;

	cout << "\nEnter The Third Number : ";
	cin >> Number3;

	cout << endl;
}

float SumOfThreeNumbers(float Number1 , float Number2 , float Number3)
{
	return Number1 + Number2 + Number3;
}

float CalculateAverage(float Number1, float Number2, float Number3)
{
	float Average = (Number1 + Number2 + Number3) / 3.0;

	cout << endl;
	
	return Average;
}

void PrintSumAndAverage(float Sum ,float Average)
{
	cout << "Summetion OF Three Numbers = " << Sum;

	cout << endl << endl;

	cout << "Average OF Three Numbers = " << Average;

	cout << endl;
}

bool AreStudentPass(float Average)
{
	if (Average >= 50) {
		cout << "Student Pass";

		cout << endl;

		return 1;
	}
	else {
		cout << "Student Fail";

		cout << endl;

		return 0;
	}
	
	cout << endl;
}

int main()
{
	// Average - Pass / Fail
	
	float Number1, Number2, Number3;

	ReadThreeNumbers(Number1, Number2, Number3);

	PrintSumAndAverage(SumOfThreeNumbers(Number1, Number2, Number3), CalculateAverage(Number1, Number2, Number3));
	
	AreStudentPass(CalculateAverage(Number1, Number2, Number3));

	return 0;
}