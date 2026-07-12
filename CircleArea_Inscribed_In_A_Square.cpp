#include <iostream>
#include<cmath>

using namespace std;

double CircleSquareSide()
{
	double SquareSide;

	cout << "Enter Square Side of Circle : ";
	cin >> SquareSide;

	return SquareSide;
}

double CalculateCircleArea(double SquareSide)
{
	const double PI = 3.141592653589793238462643;

	double Area = (PI * SquareSide * SquareSide) / 4.0;

	return Area;
}

void PrintCircleArea(double CircleArea)
{
	cout << "\nCircle Area = " << CircleArea << endl << endl;
}

int main()
{
	PrintCircleArea(CalculateCircleArea(CircleSquareSide()));
}