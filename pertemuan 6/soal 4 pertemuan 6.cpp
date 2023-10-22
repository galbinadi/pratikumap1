#include <iostream>

// Fungsi rekursif untuk menghitung faktorial
unsigned long long faktorial(int n) {
    if (n == 0) {
        return 1; // Basis kasus: 0! = 1
    } else {
        return static_cast<unsigned long long>(n) * faktorial(n - 1); // Rekursi
    }
}

int main() {
    int bilangan;

    std::cout << "Masukkan bilangan: ";
    std::cin >> bilangan;

    if (bilangan < 0) {
        std::cout << "Faktorial tidak terdefinisi untuk bilangan negatif." << std::endl;
    } else {
        unsigned long long hasil = faktorial(bilangan);
        std::cout << bilangan << "! = " << hasil << std::endl;
    }

    return 0;
}
