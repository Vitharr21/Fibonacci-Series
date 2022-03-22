#include <iostream>
using namespace std;

void adimAl(int*);

int main() {

	int n, f1 = 0, sonrakiAdim = 0;
	int f2 = 1;
	adimAl(&n);

	cout << "Fibonacci Serisi: ";

	for (int i = 1; i <= n; i++) {

		if (i == 1) {
			cout << f1 << ", ";

			continue;
		}
		if (i == 2) {
			cout << f2 << ", ";

			continue;
		}

		sonrakiAdim = f1 + f2;
		f1 = f2;
		f2 = sonrakiAdim;

		cout << sonrakiAdim << ", ";
	}
	return 0;
}
void adimAl(int* adim) {

	cout << "Lutfen Bir Sayi Giriniz:";
	cin >> *adim;

	return ;
}