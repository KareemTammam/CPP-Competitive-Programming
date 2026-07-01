#include<iostream>
#include<string>

using namespace std;

struct stNumbers
{
	float Number[10] = { 0 };
};

stNumbers ReadNumbers(stNumbers Numbers)
{
	cout << "Enter First Number : ";
	cin >> Numbers.Number[0];

	cout << "Enter Second Number : ";
	cin >> Numbers.Number[1];

	cout << "Enter Third Number : ";
	cin >> Numbers.Number[2];

	cout << "Enter Fourth Number : ";
	cin >> Numbers.Number[3];

	cout << "Enter Fifth Number : ";
	cin >> Numbers.Number[4];

	cout << "Enter Sixth Number : ";
	cin >> Numbers.Number[5];

	cout << "Enter Seventh Number : ";
	cin >> Numbers.Number[6];

	cout << "Enter Eighth Number : ";
	cin >> Numbers.Number[7];

	cout << "Enter Ninth Number : ";
	cin >> Numbers.Number[8];

	cout << "Enter Tenth Number : ";
	cin >> Numbers.Number[9];

	return Numbers;
}

void DetermineWhoIsMax(stNumbers Numbers)
{
	float Max = Numbers.Number[0];
	float Size = 10;

	for (int i = 1; i <= Size -1; i++)
	{
		if (Numbers.Number[i] > Max)
			Max = Numbers.Number[i];
	}
	
	cout << endl << "Max = " << Max << endl;

}

int main()
{
	stNumbers Number;

	DetermineWhoIsMax(ReadNumbers(Number));
}