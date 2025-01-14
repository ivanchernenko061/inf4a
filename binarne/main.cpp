#include <iostream>

int binToDec(int num);

int main() {
    int num;

    std::cout << "Wprowadz liczbe:\n";
    std::cin >> num;
    std::cout << "Dziesietna: " << num << std::endl;
    std::cout << "Binarna: " << binToDec(num) << std::endl;

    return 0;
}

int binToDec(int num) {
    int tab[32];
    int i = 0;

    while (num != 0) {
        tab[i++] = num % 2;
        num /= 2;
    }

    for (int j = i - 1; j >= 0; j--) {
        std::cout << tab[j];
    }

}
