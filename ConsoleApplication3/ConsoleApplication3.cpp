#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{

	double miles;
	double cents;
	cents = 0.00;

	cout << "Enter miles here " << endl;
	cin >> miles;

	if (miles = 100)
	{
		cents = .25;
	}
	else if (miles <= 100)
	{
		cents = 0.00;
	}
	cout << cents << endl;



    return 0;
}