#include <iostream>
using namespace std;

int main() {

	int a, b, a1, a2, temp, kmm;
	cout << "Enter the first number : ";
	cin >> a;
	cout << "Enter the second number : ";
	cin >> b;
	a1 = a;
	a2 = b;

	while (true) {

		if (b == 0) break;

		temp = a%b;
		a = b;
		b = temp;
	}

	kmm = (a1 * a2) / a;

	
	cout << "K.M.M  :" << kmm << endl;

	system("pause");

	return 0;
}