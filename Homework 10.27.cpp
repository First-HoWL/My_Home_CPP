#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

void SetColor(int textColor, int bgColor)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,
		(bgColor << 4) | textColor);
}

struct date {
	int d, m, y;

	bool isCorrect(){
		if (m < 1 || m > 12)
			return false;
		if (d < 1 || d > getDaysInMonth())
			return false;
		if (y < 0)
			return false;

		return true;
	}

	int days() {
		int years_in_days = y * 365;
		for (int i = 0; i <= y; i++)
			if (i % 400 == 0 || i % 100 != 0 && i % 4 == 0)
				years_in_days++;

		int mounth_in_days = 0;
		for (int i = 0; i < m; i++) {
			mounth_in_days += getDaysInMonth(i, y);
		}
		return years_in_days + mounth_in_days + d;
	}

	bool isLeapYear(){
		return isLeapYear(y);
	}

	bool isLeapYear(int _year){
		return _year % 400 == 0 || _year % 4 == 0 && _year % 100 != 0;
	}

	int getDaysInMonth(){
		return getDaysInMonth(m, y);
	}

	int getDaysInMonth(int _month, int year){
		switch (_month)
		{
		case 1: return 31;
		case 2: return isLeapYear(year) ? 29 : 28;
		case 3: return 31;
		case 4: return 30;
		case 5: return 31;
		case 6: return 30;
		case 7: return 31;
		case 8: return 31;
		case 9: return 30;
		case 10: return 31;
		case 11: return 30;
		case 12: return 31;
		default: return 0;
		}
	}

	void print_date(){
		cout << (d < 10 ? "0" : "") << d << "." << (m < 10 ? "0" : "") << m << "." << y;
	}
};

int riznica(date a, date b) {
	return a.days() - b.days();
}

int main()
{
	srand(time(0));
	date a = { 2000, 2, 30 }, b = { 2010, 5, 10 };
	cout << riznica(a, b);
	
	return 0;
}
