
#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	double time = 0.0;
	double grossPay = 0.0;
	double tips = 0.0;
	double netPay = 0.0;

	cout << "Hello Welcome to your Server Tip calculator!\nPlease enter the number of hours you worked this week: \n";
	cin >> time;

	grossPay = time * 12;

	
	
	cout << "Now enter in the amount of tip for the week: \n";
	cin >> tips;

	grossPay += tips;
	netPay = (grossPay * 0.83) - tips;

	cout << "Your total gross income is: $" << grossPay;
	cout << "\nYour net pay is: $" << netPay;
	cout << "\nThank you!\n";





}

