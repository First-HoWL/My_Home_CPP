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

int stepen(int x, int y) {
	int a = x;
	for (int i = 0; i < y - 1; i++)
		a *= x;

	return a;
}

int diapazon(int a, int b) {
	int c = 0;
	for (int i = a + 1; i < b; i++)
		c += i;
	return c;
}

bool doskonale(int a) {
	int b = 0;
	for (int i = 1; i < a; i++) {
		if (a % i == 0)
			b += i;
	}
	if (b == a)
		return true;
	else
		return false;
}

void card1(char a, char b) {
	cout << "+---------+ " << endl;
	cout << "| " << a << b << "      |" << endl;
	cout << "|         |" << endl;
	cout << "|         |" << endl;
	cout << "|         |" << endl;
	cout << "|         |" << endl;
	cout << "|      " << a << b << " |" << endl;
	cout << "+---------+" << endl;
}

bool isGood(int a) {
	int x[6] = { 
		a / 100000,
		a % 100000 / 10000,
		a % 100000 % 10000 / 1000,
		a % 100000 % 10000 % 1000 / 100,
		a % 100000 % 10000 % 1000 % 100 / 10,
		a % 100000 % 10000 % 1000 % 100 % 10,
	};
	if (x[0] == x[5] && x[1] == x[4] && x[2] == x[3])
		return true;
	return false;
}

int main()
{
	srand(time(0));

	// 1
	int x, y;
	cout << "stepen(x, y): ";
	cin >> x >> y;
	cout << stepen(x, y) << endl;

	// 2
	int a, b;
	cout << "diapazon(a, b): ";
	cin >> a >> b;
	cout << diapazon(a, b) << endl;

	// 3
	int c;
	cout << "doskonale(c): ";
	cin >> c;
	cout << doskonale(c) << endl;

	// 4
	char card, suit;
	cout << "Your card('A', '2', '3', ..., 'K'): ";
	cin >> card;
	cout << "Your suit('♠', '♥', '♦', '♣'): ";
	cin >> suit;
	card1(card, suit);

	// 5
	int d;
	cout << "isGood(d): ";
	cin >> d;
	cout << isGood(d) << endl;

	
	return 0;
}
