#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;

int randint(int min, int max) {
	return(rand() % (max - min + 1) + min);
}

int main()
{
	srand(time(NULL));



	const int rows = 21;
	const int cols = 21;
	int product[rows][cols] = { {0} };


	for (int i = 0; i < rows; i++)
		for (int j = 0; j < cols; j++)
			product[i][j] = i * j;


	for (int i = 1; i < rows; i++)
	{
		for (int j = 1; j < cols; j++)
			cout << product[i][j] << "\t";
		cout << '\n';
	}

	return 0;
}
