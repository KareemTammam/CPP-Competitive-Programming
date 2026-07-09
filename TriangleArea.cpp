#include<iostream>
#include<string>
#include<cmath>

using namespace std;

void ReadBasendHeight(double &Base , double &Height)
{

	cout << "Enter The Base OF Triangle : ";
	cin >> Base;

	cout << "\nEnter The Height OF Triangle : ";
	cin >> Height;

	cout << endl;
}

double CalculateTriangleArea(double Base ,double Height)
{
	double Area = 0.5 * Base * Height;
	return Area;
}

void PrintTriangleArea(double TriangleArea)
{
	cout << endl << "Triangle Area = " << TriangleArea << endl;
}

int main()
{
	double base, Height;
	ReadBasendHeight(base, Height);
	PrintTriangleArea(CalculateTriangleArea(base, Height));
}