#include <math.h>
#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>
using namespace std;

struct date {
	int y, m, d;
};

bool is_date_correct(date a) {
	if (a.m > 12 || a.m < 1 || a.d < 1 || a.y < 0) {
		return false;
	}
	else if (a.d > 28) {
		if (a.d > 31 && a.m == 1)
			return false;
		if (a.d > 28 && a.m == 2) {
			if (a.d > 29)
				return false;
			if (a.y % 400 == 0 || a.y % 100 != 0 && a.y % 4 == 0)
				return true;
		}
		if (a.d > 31 && a.m == 3)
			return false;
		if (a.d > 30 && a.m == 4)
			return false;
		if (a.d > 31 && a.m == 5)
			return false;
		if (a.d > 30 && a.m == 6)
			return false;
		if (a.d > 31 && a.m == 7)
			return false;
		if (a.d > 31 && a.m == 8)
			return false;
		if (a.d > 30 && a.m == 9)
			return false;
		if (a.d > 31 && a.m == 10)
			return false;
		if (a.d > 30 && a.m == 11)
			return false;
		if (a.d > 31 && a.m == 12)
			return false;
	}
	return true;
}

int riznica(date a, date b) {
	int d_days = ((((b.y * 12) + b.m) * 30) + b.d) - ((((a.y * 12) + a.m) * 30) + a.d);
	return d_days;
}

int main()
{
	date data = { 2000, 2, 30 }, a, b;
	cout << "First year mounth day";
	cin >> a.y >> a.m >> a.d;
	if (is_date_correct(a) == false)
		cout << "Not Correct";
	cout << "Seccond year mounth day";
	cin >> b.y >> b.m >> b.d;
	if (is_date_correct(b) == false)
		cout << "Not Correct";
	cout << riznica(a, b) << "days" << endl;


	cout << "is date correct?" << endl;
	cout << data.y << "." << data.m << "." << data.d << endl;
	if (is_date_correct(data))
		cout << "YES!!!";
	else
		cout << "No";


	return 0;
}
