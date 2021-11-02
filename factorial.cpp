#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "enter a number" << endl;
	cin >> n;
	for (int i = 1;; i++) {
		if (n % i == 0) {
			n /= i;
		}
		else {
			break;
		}
	}

	if (n == 1) {
		cout<< "yes" ;
	}
	else {
		cout << "no" << endl;
	}
	system("pause");
	return 0;
}