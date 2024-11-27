#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int rozklad(int n);

int main() {
	int n;
	
	cout << "Wprowadz liczbe ktora chcesz rozlozyc" << endl;
	cin >> n;
	cout << "Wprowadzona liczba: " << n << endl;
	cout << "Rozklad na czynniki pierwsze: " << rozklad(n);
	
	return 0;
}

int rozklad(int n) {
	int k = 2;
	
	while (n > 1) {
		while (n % k == 0) {
			cout << k << " ";
			n = n / k;
		}
		++k;
	}
}