#include <iostream>
using namespace std;

//program calculates user input to determine desired phone plan 
//and offers advice on better rates (if available) by suggesting switching to other plans.

int main ( )
{
	//ask user for desired plan and data
	char A, a, B, b, C, c, Y, y, N, n;
	char plan_Choice;
	int unit_Choice;
	char goAgain;
	
	do
	{
		cout << "Which data plan are you interested in? (enter A, B or C)\n";
		cin >> plan_Choice;
		cout << "How many message units are you interested in? (enter 1 - 672)\n";
		cin >> unit_Choice;
		char Y, y, N, n;
			
		
		//calculate cost of plan and message unit rates
		
		double package_A, package_B, package_C;
		double message_Rate_A, message_Rate_B;
		double costA, costB;
		package_A = 19.99;
		package_B = 39.99;
		package_C = 59.99;
		
		// and compare plans
		switch (plan_Choice)
	{
			case 'A':
			case 'a':
					{if ((unit_Choice >= 1) && (unit_Choice <= 672))
	
					{if (unit_Choice > 20)
						{message_Rate_A = ((unit_Choice - 20) * 0.25);
						cout << "You've selected plan " << plan_Choice << " and " << unit_Choice << " message units.\n";
						costA = (package_A + message_Rate_A);
						cout << "The cost for your package and units is $" << costA << endl;
						
					if (unit_Choice > 100)
						{message_Rate_B = ((unit_Choice - 100) * 0.10);
						 cout << "By switching to plan B you would save $" << (costA - (package_B + message_Rate_B)) << endl;
						}
						
						if (costA > 59.99)
							{ cout << "By switching to plan C you would save $" << (costA - 59.99) << endl;
							}
							}
						
				else {
					cout << "The cost for your package and units is $" << package_A << endl;
					}
					}
				else {
					cout << "Please enter a number between 1 and 672.\n";
					}
					}
					cout <<"Would you like to try again? (Y/N)\n";
					cin >> goAgain;
					break;
					
			case 'B':
			case 'b':
					{	
					if ((unit_Choice >= 1) && (unit_Choice <= 672))
					
					{
					if (unit_Choice > 100)
						{message_Rate_B = ((unit_Choice - 100) * 0.10);
						cout << "You've selected plan " << plan_Choice << " and " << unit_Choice << " message units.\n";
						costB = (package_B + message_Rate_B);
						cout << "The cost for your package and units is $" << (costB) << endl;
						
					if (costB > 59.99)
						{ cout << "By switching to plan C you would save $" << (costB - package_C) << endl;
						}
					
						}
					else {
						cout << "The cost for your package and units is $" << package_B << endl;
					}
					}
					else {
					cout << "Please enter a number between 1 and 672.\n";
						}
						}
					cout <<"Would you like to try again? (Y/N)\n";
					cin >> goAgain;
					break;
					
			case 'C':
			case 'c':
					{if ((unit_Choice >= 1) && (unit_Choice <= 672))
					{
					cout << "You've selected plan " << plan_Choice << " and " << unit_Choice << " message units.\n";
					cout << "The cost for your package and units is $" << (package_C) << endl;
					
					if (unit_Choice < 180)
					{ cout << "By switching to plan A you would save $40.\n";
					}
					if (unit_Choice < 300)
					{
					cout << "By switching to plan B you could save money!\n";
					}
					} else {
						cout << "Please enter a number between 1 and 672.\n";
					}
					}
					
					cout <<"Would you like to try again? (Y/N)\n";
					cin >> goAgain;
					break;
			default:
					cout << "Please enter a valid package! (A, B or C)\n";
				}
		}  while ((goAgain == 'Y') || (goAgain == 'y'));
		if ((goAgain == 'N') || (goAgain == 'n'))
		{	
		cout << "Thank you! Please come again!\n";
		}
		
	cout.setf(ios::fixed);	
	cout.setf(ios::showpoint);
	cout.precision(2);
	return 0;
		
}
