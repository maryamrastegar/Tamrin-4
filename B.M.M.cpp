#include <iostream>
using namespace std;

int main() {

	int a, b, temp;
	cout << "Enter the first number : ";
	cin >> a;
	cout << "Enter the second number : ";
	cin >> b;
	while (true) {

		if (b == 0) break;

		temp = a%b;
		a = b;
		b = temp;
	}
	cout << "B.M.M :" << a <<endl;

	system("pause");
	return 0;
}