#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double ReadCircleDiameter()
{
	double Diameter;

	cout << "Enter The Circle Area : ";
	cin >> Diameter;

	return Diameter;
}

double CalculateCircleArea(double CircleDiameter)
{
	const double PI = 3.141592653589793238;

	double CirculeArea = (PI * pow(2, CircleDiameter)) / 4.0;

	return CirculeArea;
}

void PrintCircleArea(double CircleArea)
{
	cout << "\nThe Circle Area = " << CircleArea << endl;
}

int main()
{
  
	// Welcome

	PrintCircleArea(CalculateCircleArea(ReadCircleDiameter()));

	// GoodBye
}