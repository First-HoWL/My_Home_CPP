#include <iostream>
using namespace std;

int main()
{

	double a, b, c, e, f, h;
	cout << "Viber:\n";
	cin >> a;

	cout << "Telegram:\n";
	cin >> b;

	cout << "Viber and Telegram:\n";
	cin >> c;

	double d = (a + b + c * 2);


	e = ((a + c) / d) * 100.;
	f = ((b + c) / d) * 100.;
	h = ((2 * c) / d) * 100.;

	cout << e << "% Viber " << f << "% Telegram " << h << "% Two platforms\n";



	return 0;
}
