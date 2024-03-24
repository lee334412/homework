#include<iostream>

using namespace std;

void input(int &, int &);
void conversion(int &, int &, char &);
void output(int &, int&, char &);

int main()
{
	char choice;

	do {
		int hour, minute;
		char period;
		input(hour, minute);
		conversion(hour, minute, period);
		output(hour, minute, period);
		cout << "Do you want to covert again(y/n) ?";
		cin >> choice;
	} while (choice == 'y' || choice == 'Y');

	system("pause");
	return 0;
}
void input(int& hour, int& minute)
{
	cout << "Input the hour and minute =>";
	cin >> hour >> minute;
}
void conversion(int& hour, int& minute, char& period)
{
	if (hour >= 12) {
		period = 'P';
		if (hour > 12) {
			hour -= 12;
		}
	}
	else {
		period = 'A';
		if (hour == 0) {
			hour = 12;
		}
	}
}
void output(int& hour, int& minute, char& period)
{
	cout << "Coverted Time" << period << ".M." << hour << ":" << (minute < 10 ? "0" : "") << minute << endl;
}