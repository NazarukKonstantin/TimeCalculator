#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int hours_1, hours_2, mins_1, mins_2, sum_hours, sum_mins, dif_hours, dif_mins, switcher;
	cout << "Enter the time you want to operate" << endl;
	cout << "Hours: ";
	cin >> hours_1;
	cout << "Minutes: ";
	cin >> mins_1;
	cout << "What kind of operation do you want to proceed?\n1.+ 2.-" << endl;
	do
	{
		cin >> switcher;
		switch (switcher)
		{
		case 1: cout << "How much do you want to add?" << endl;
			cout << "Hours: ";
			cin >> hours_2;
			cout << "Minutes: ";
			cin >> mins_2;
			sum_hours = hours_1 + hours_2;
			if (sum_hours >= 24)
			{
				sum_hours -= 24;
			}
			sum_mins = mins_1 + mins_2;
			if (sum_mins >= 60)
			{
				sum_mins -= 60;
				sum_hours++;
			}
			cout << hours_1 << ":" << mins_1 << " + " << hours_2 << ":" << mins_2 << " = " << sum_hours << ":" << sum_mins << endl; break;
		case 2: cout << "How much do you want to subtract?" << endl;
			cout << "Hours: ";
			cin >> hours_2;
			cout << "Minutes: ";
			cin >> mins_2;
			dif_hours = hours_1 - hours_2;
			if (dif_hours < 0)
			{
				dif_hours += 24;
			}
			dif_mins = mins_1 - mins_2;
			if (dif_mins < 0)
			{
				dif_mins += 60;
				dif_hours--;
			}
			cout << hours_1 << ":" << mins_1 << " - " << hours_2 << ":" << mins_2 << " = " << dif_hours << ":" << dif_mins << endl; break;
		default: cout << "Something went wrong. Please,enter 1 or 2" << endl;
		}
	} while (switcher != 1 && switcher != 2);
	return 0;
}
	