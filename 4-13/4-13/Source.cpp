#include<iostream>

using namespace std;

double converToMPH(double, double);
double converToMPH(double);
int main()
{
	double paceMinute, paceSecond;
	cout << "Enter the pace time (minute and second) =>";
	cin >> paceMinute >> paceSecond;
	cout << "Pace of " << paceMinute << ":" << paceSecond << " mile is " << converToMPH(paceMinute, paceSecond) << " mph " << endl;
	double kph;
	cout << "Enter the kph =>";
	cin >> kph;
	cout << kph << "kph is approximately " << converToMPH(kph) << " mph" << endl;

	system("pause");
	return 0;
}
double converToMPH(double paceMinute, double paceSecond)
{
	double mph = (paceMinute + paceSecond / 60)/60;
	return mph;
}
double converToMPH(double kph)
{
	return kph / 1.61;
}