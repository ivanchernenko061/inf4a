#include <iostream>
#include <cmath>
using namespace std;

int CalculatePowerRecursive(int p, int w);
int DisplayResult(int p, int w);

int main()
{
    int p, w;
    
    cout << "Wprowadz podstawe: ";
    cin >> p;
    cout << "Wprowady wykladnik: ";
    cin >> w;
    
    cout << "Wynik potegowania rekurncyjnego: " << DisplayResult(p, w);
    
    return 0;
}


int CalculatePowerRecursive(int p, int w) {
    if (w == 0) {
        return 1;
    }
    return p * CalculatePowerRecursive(p, w - 1);
}


int DisplayResult(int p, int w) {
    return CalculatePowerRecursive(p, w);
}