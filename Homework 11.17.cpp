#include <math.h>
#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <string>
#include <iomanip> 
using namespace std;


int main()
{
	srand(time(0));
	const char FILE_PATH[] = "numbers.txt";
	
	while (true) {
		int vibor;
		FILE* file;
		cout << "1. new file, 2. append numb, 3. reading numb, 4. avg 0. Exit" << endl << " >> ";
		cin >> vibor;
		system("cls");
		if (vibor == 0)
			break;

		if (vibor == 1) {
			fopen_s(&file, FILE_PATH, "wb");
			fclose(file);
		}
		else if (vibor == 2) {
			int a;

			fopen_s(&file, FILE_PATH, "ab");
			cout << "numb: ";
			cin >> a;
			fwrite(&a, sizeof(a), 1, file);
			fclose(file);
		}
		else if (vibor == 3) {
			int a;
			fopen_s(&file, FILE_PATH, "rb");
			while (fread(&a, sizeof(int), 1, file))
			{
				cout << a << " ";
			}
			cout << endl;
			fclose(file);
		}
		else if (vibor == 4) {
			int a, sum = 0, i = 0;
			fopen_s(&file, FILE_PATH, "rb");
			while (fread(&a, sizeof(int), 1, file))
			{
				sum += a;
				i++;
			}
			cout << "Avg: " << sum / i << endl;
			fclose(file);
		}

	}


	return 0;
}
