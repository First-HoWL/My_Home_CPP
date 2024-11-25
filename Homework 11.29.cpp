#include <math.h>
#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <string>
#include <iomanip> 
#include <fstream>
using namespace std;
#define FILE_PATH "file1.txt"
#define FILE_PATH2 "file2.txt"

void SetColor(int textColor, int bgColor)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,
		(bgColor << 4) | textColor);
}

int randint(int min, int max) {
	return(rand() % (max - min + 1) + min);
}

int main()
{
	srand(time(0));
	fstream file, file2;
	string text, text2;
	

	file.open(FILE_PATH, ios::app);
	file.close();
	file2.open(FILE_PATH2, ios::app);
	file2.close();

	file.open(FILE_PATH, ios::in);
	file2.open(FILE_PATH2, ios::in);

	do {
		getline(file, text);
		getline(file2, text2);
		if (text != text2) {
			cout << text << " != " << text2 << endl;
		}
	} while (file);
	

	file.close();
	file2.close();

	return 0;
}
