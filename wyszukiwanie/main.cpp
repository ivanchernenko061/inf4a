#include <iostream>
using namespace std;

int szukaj(int tab[], int szukana);


int main()
{
    int szukana;
    int tab[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };

    cout << "Podaj liczbe ktora chcesz znalezc: \n";
    cin >> szukana;
    if (szukaj(tab, szukana) == -1) {
        cout << "Nie ma liczby.\n";
    }
    else {
        cout << "Szukana liczba " << szukana << " znajduje sie na pozycji " << szukaj(tab, szukana);
    }
}

int szukaj(int tab[], int szukana) {
    int l = 0;
	int p = 10;
	int sr =  (l + p) / 2;

    while (l <= p) {
        if (tab[sr] == szukana) {
            return sr;
        }
        else if (tab[sr] > szukana) {
            p = sr - 1;
        }
        else {
            l = sr + 1;
        }
        sr = (l + p) / 2;
    }

    return -1;
}