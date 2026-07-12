#include <iostream>

using namespace std;

int ReadNumber()
{
	int Number;

	cout << "Enter The Number: ";
	cin >> Number;

	return Number;
}

void PrintFrom1ToNumberUsingWhile(int Number)
{
	cout << endl;

	int Counter = 0;

	while (Counter <= Number)
	{
		cout << Counter << " ";
		Counter++;
	}

	cout << endl;
}

void PrintFrom1ToNumberUsingDoWhile(int Number)
{
	cout << endl;

	int Counter = 0;

	do 
	{
		cout << Counter << " ";
		Counter++;

	} while (Counter <= Number);

	cout << endl;
}

void PrintFrom1ToNumberUsingFor(int Number)
{
	cout << endl;

	for (int Counter = 0; Counter <= Number; Counter++)
	{
		cout << Counter << " ";
	}

	cout << endl;
}

int main()
{
	int Number = ReadNumber();

	PrintFrom1ToNumberUsingWhile(Number);
	PrintFrom1ToNumberUsingDoWhile(Number);
	PrintFrom1ToNumberUsingFor(Number);

	return 0;
}