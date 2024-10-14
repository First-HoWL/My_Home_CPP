#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

void cout_masiv(int array[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << array[i] << ", ";
	}
	cout << "\b\b." << endl;
}

int randint(int min, int max) {
	return(rand() % (max - min + 1) + min);
}

void delete1(int array[], int& size, bool a) {
	if (a == false) {
		for (int i = 0; i < size; i++) {
			if (array[i] % 2 != 0) {
				swap(array[i], array[size - 1]);
				size--;
				i--;
			}
		}
	}
	else {
		for (int i = 0; i < size; i++) {
			if (array[i] % 2 == 0) {
				swap(array[i], array[size - 1]);
				size--;
				i--;
			}
		}
	}
}

int main()
{
	srand(time(0));
	int size = 0;

	cout << "Size masivy: ";
	cin >> size;

	int* array = new int[size];
	bool a;

	cout << "Ydalit parni? 1: da, 0: net\n >>";
	cin >> a;

	for (int i = 0; i < size; i++)
		array[i] = randint(-10, 10);

	cout << endl;
	cout << "started massiv: ";
	cout_masiv(array, size);
	cout << endl;
	delete1(array, size, a);
	cout << "finished massiv: ";
	cout_masiv(array, size);
	cout << endl;

	delete[] array;
	return 0;
	}
