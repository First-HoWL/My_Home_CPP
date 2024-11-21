#include <math.h>
#include <iostream>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <string>
#include <iomanip> 
using namespace std;

struct book {
	char name[20] = "none";
	char author[20] = "none";
	char vidovnitstvo[20] = "none";
	char genre[20] = "none";

	void cout_book(){
		cout << setw(20) << name << " | " << setw(20) << author << " | " << setw(20) << vidovnitstvo << " | " << setw(20) << genre << endl;
	}
};

int main()
{
	srand(time(0));
	book book_shelve[10];
	for (int i = 0; i < 10; i++) {
		book_shelve[i].cout_book();
	}

	return 0;
}
