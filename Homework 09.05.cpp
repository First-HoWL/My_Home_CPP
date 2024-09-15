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

int main()
{
	

	int score = 0;
	char answer;
	

	cout << "Viktorina" << endl;
	cout << "First question: 00010101 - kakoe eto chislo? \n1. 21 \n2. 17 \n3. 37\n4. 3 \n >> ";
	cin >> answer;
	system("cls");

	if (answer == '1') {
		SetColor(2, 0);
		cout << "Correct!" << endl;
		score++;
		Sleep(2000);
		system("cls");
		SetColor(7, 0);
	}
	else {
		SetColor(4, 0);
		cout << "Not correct!" << endl;
		Sleep(2000);
		system("cls");
		SetColor(7, 0);
	}


	cout << "Seccond question: V kakom gody sozdali IT STEP? \n1. 2001 \n2. 2002 \n3. 1999\n4. 1995 \n >> ";
	cin >> answer;
	system("cls");

	if (answer == '3') {
		SetColor(2, 0);
		cout << "Correct!" << endl;
		score++;
		Sleep(2000);
		system("cls");
		SetColor(7, 0);
	}
	else {
		SetColor(4, 0);
		cout << "Not correct!" << endl;
		Sleep(2000);
		system("cls");
		SetColor(7, 0);
	}


	cout << "Third question: Kakogo chisla kapitylirovala germaniya v 1945 gody(po tsentral'noyevropeyskomu vremeni)? \n1. 8 may \n2. 7 may \n3. 9 may\n4. 2 sep \n >> ";
	cin >> answer;
	system("cls");

	if (answer == '1') {
		SetColor(2, 0);
		cout << "Correct!" << endl;
		score++;
		Sleep(2000);
		system("cls");
		SetColor(7, 0);
	}
	else {
		SetColor(4, 0);
		cout << "Not correct!" << endl;
		Sleep(2000);
		system("cls");
		SetColor(7, 0);
	}


	cout << "Fourth question: Shto takoe Python? \n1. Vidumane slovo \n2. Yazik programirovaniya \n3. Nazvanie komputernoi igri \n4. Komanda dlya vizova funcsii v C++ \n >> ";
	cin >> answer;
	system("cls");

	if (answer == '2') {
		SetColor(2, 0);
		cout << "Correct!" << endl;
		score++;
		Sleep(2000);
		system("cls");
		SetColor(7, 0);
	}
	else {
		SetColor(4, 0);
		cout << "Not correct!" << endl;
		Sleep(2000);
		system("cls");
		SetColor(7, 0);
	}


	cout << "Fifth question: Shto takoe Processor? \n1. Vidumane slovo \n2. korpus komputera \n3. Tsentralnoye obrabatyvayushcheye ustroystvo \n4. Nastolnaya igra \n >> ";
	cin >> answer;
	system("cls");

	if (answer == '3') {
		SetColor(2, 0);
		cout << "Correct!" << endl;
		score++;
		Sleep(2000);
		system("cls");
		SetColor(7, 0);
	}
	else {
		SetColor(4, 0);
		cout << "Not correct!" << endl;
		Sleep(2000);
		system("cls");
		SetColor(7, 0);
	}

	cout << "Your score: " << score << endl;

	return 0;
}
