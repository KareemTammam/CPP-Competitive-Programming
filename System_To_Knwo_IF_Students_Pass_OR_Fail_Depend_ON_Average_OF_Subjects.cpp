#include<iostream>
#include<string>

using namespace std;

struct stDegree
{
	int Arabic;
	int English;
	int Math;
	int IT;
	int Programming;
	int DataBase;
	int OOP;
	int DataStructure;
	int Communication;
};

stDegree ReadSubjectsMark()
{
	stDegree Degree;

	cout << "Enter Your Degree in Arabic : ";
	cin >> Degree.Arabic;
	cout << endl;

	cout << "Enter Your Degree in English : ";
	cin >> Degree.English;
	cout << endl;

	cout << "Enter Your Degree in IT : ";
	cin >> Degree.IT;
	cout << endl;

	cout << "Enter Your Degree in Programming : ";
	cin >> Degree.Programming;
	cout << endl;

	cout << "Enter Your Degree in Math : ";
	cin >> Degree.Math;
	cout << endl;

	cout << "Enter Your Degree in DataBase : ";
	cin >> Degree.DataBase;
	cout << endl;

	cout << "Enter Your Degree in OOP : ";
	cin >> Degree.OOP;
	cout << endl;

	cout << "Enter Your Degree in DataStructure : ";
	cin >> Degree.DataStructure;
	cout << endl;

	cout << "Enter Your Degree in Communication : ";
	cin >> Degree.Communication;
	cout << endl;

	return Degree;
}

int CalculateAverage(stDegree Degree)
{
	int Average; 

	Average = (Degree.Arabic + Degree.English + Degree.IT + Degree.Programming + Degree.DataBase + Degree.OOP + Degree.DataStructure + Degree.Communication) / 9.0;

	return Average;
}

int CheckPass(stDegree Degree)
{
	return (CalculateAverage(Degree) >= 50);
}

void FinalResult(stDegree Degree)
{
	cout << endl;

	if (CheckPass(Degree))
		cout << "PASS";
	else
		cout << "FAIL";

	cout << endl;
}

int main()
{
	stDegree Degree;

	Degree = ReadSubjectsMark();

	int Average = CalculateAverage(Degree);
	cout << endl << "Average = " << Average << endl;

	FinalResult(Degree);

	return 0;
}