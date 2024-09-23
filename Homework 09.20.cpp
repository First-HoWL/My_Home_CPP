/*
	// 1
	int a, b = 0;
	cout << "chislo: ";
	cin >> a;
	for (int i = a; i < 500; i++) {
		b += i;
	}
	cout << b;
	*/
	// 2
	int x, y, z;
	cout << "chislo(x, y): ";
	cin >> x >> y;
	z = x;
	for (int i = 0; i < y - 1; i++) {
		z *= x;
	}
	cout << x << "v stepini" << y << " = " << z << endl;
