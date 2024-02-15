#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int a, b, h=0;

	do {
		cout << "Please, enter positive a" << endl;
		cin >> a;
	} while (a <= 0);

	do {
		cout << "Please, enter positive b" << endl;
		cin >> b;
	} while (b <= 0);

	for (int n = 1, x = 1; x > 0; n++) {
		x = a / pow(b, n - 1);
		h += x;
	}
	cout << h << " hours" << endl;

	system("pause");
	return 0;
}