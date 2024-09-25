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



	const int rows = 13;
	const int cols = 13;
	int product[rows][cols] = { {0} };
	

	for (int i = 0; i < rows - 1; i++)
		for (int j = 0; j < cols - 1; j++)
			product[i][j] = i * j;

	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			if (product[i][j] != 0)
				cout << product[i][j] << "\t";
			else
				cout << "HHHHHHH" << "\t";

		cout << '\n';
	}

	return 0;
}
