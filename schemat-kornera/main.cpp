#include <iostream>
using namespace std;

int funkcjaHornera(int* wsp, int st, int x);

int main()
{
    cout << "Podaj stopien wielomianu: ";
    int st;
    cin >> st;

    int* wsp = new int[st + 1];
    for (int i = st; i >= 0; i--)
    {
        cout << "Podaj wspolczynnik przy potedze " << i << ":";
        cin >> wsp[i];
    }

    cout << "Podaj x: ";
    int x;
    cin >> x;


    cout << "W( " << x << " ) = " << funkcjaHornera(wsp, st, x);

    return 0;
}

int funkcjaHornera(int* wsp, int st, int x)
{
    if (st == 0)
    {
        return wsp[0];
    }

    return x * funkcjaHornera(wsp, st - 1, x) + wsp[st];
}