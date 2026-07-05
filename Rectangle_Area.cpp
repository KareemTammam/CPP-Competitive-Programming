#include<iostream>
#include<string>

using namespace std;

void ReadWidthAndLength(double& A, double& B)
{
	cout << "Please Enter rectangle width A : ";
	cin >> A;

	cout << "Please Enter rectangle Length B : ";
	cin >> B;

	cout << endl << endl;
}

double CalculateRectangleArea(double A,double B)
{
	return A * B;
}

void PrintResult(double Number)
{
	cout << "Regtangle Area = " << Number << endl << endl;
}

int main()
{
	double A, B;

	ReadWidthAndLength(A, B);
	PrintResult(CalculateRectangleArea(A, B));
}