#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int hours_1, hours_2, mins_1, mins_2, sum_hours, sum_mins;
	cout << "Enter the time you want to operate" << endl;
	cout << "Hours: ";
	cin >> hours_1;
	cout << "Minutes: ";
	cin >> mins_1;
	cout << "How much do you want to add?" << endl;
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
	cout << hours_1 << ":" << mins_1 << " + " << hours_2 << ":" << mins_2 << " = " << sum_hours << ":" << sum_mins << endl;
	return 0;
}
	