#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>
using namespace std;

int randint(int min, int max) {
	return(rand() % (max - min + 1) + min);
}

void cout_masiv(int array[], int len) {
	for (int i = 0; i < len; i++)
		cout << array[i] << ", ";
		cout << "\n";
}

int min_array(int array[], int len, int from) {
	int a = 100000, b;
	for (int i = from; i < len; i++) {
		if (array[i] < a){
			a = array[i];
			b = i;
		}
	}
	return b;
}

void sort(int array[], int len) {
	for (int i = 0; i < len; i++) {
		swap(array[i], array[min_array(array, len, i)]);
	}
}

int main()
{
	srand(time(0));

	int array[10];
	int len = 10;
	for (int i = 0; i < len; i++)
		array[i] = randint(-10, 10);

	cout_masiv(array, len);
	sort(array, len);
	cout_masiv(array, len);

	return 0;

}
