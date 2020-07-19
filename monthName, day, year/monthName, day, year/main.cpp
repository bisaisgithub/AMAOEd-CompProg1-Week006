#include<cstdlib>
#include<cstring>
#include<iostream>

#pragma warning(disable : 4996) //not on the module presentation Week006

using namespace std;

int main() {
	char monthName[10];
	short month, day, year;

	cout << "Enter Month: ";
	cin >> month;

	cout << "Enter day: ";
	cin >> day;

	cout << "Enter year: ";
	cin >> year;
	cout << endl;

	switch (month)
	{
	case 1: strcpy(monthName, "January"); break;
	case 2: strcpy(monthName, "January"); break;
	case 3: strcpy(monthName, "January"); break;
	case 4: strcpy(monthName, "January"); break;
	case 5: strcpy(monthName, "January"); break;
	case 6: strcpy(monthName, "January"); break;
	case 7: strcpy(monthName, "January"); break;
	case 8: strcpy(monthName, "January"); break;
	case 9: strcpy(monthName, "January"); break;
	case 10: strcpy(monthName, "January"); break;
	case 11: strcpy(monthName, "January"); break;
	case 12: strcpy(monthName, "January"); break;
	default: cout << "Invalid Month" << endl;
	}

	if (strcmp(monthName, "")) { //this is (!strmp..) on the presentation module week006
		cout << monthName << " " << day << ", " << year << endl;
	}

	cout << "monthName Value: " << monthName << endl; //not on the module presentation Week006
	cout << "Actual User Input: " << month << " " << day << " " << year << endl; //not on the module presentation Week006

	cout << endl;
	system("Pause");
	return EXIT_SUCCESS;
}