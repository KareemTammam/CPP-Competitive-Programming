#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double ReadCircleRadius()
{
    double Radius;

    cout << "Enter The Circle Radius: ";
    cin >> Radius;

    return Radius;
}

double CalculateTheCircleArea(double Radius)
{
    const double PI = 3.141592653589793;

    double CircleArea = PI * Radius * Radius;

    return CircleArea;
}

void PrintCircleArea(double CircleArea)
{
    cout << "\nCircle Area = " << CircleArea << endl;
}

int main()
{
    PrintCircleArea(CalculateTheCircleArea(ReadCircleRadius()));

    return 0;
}