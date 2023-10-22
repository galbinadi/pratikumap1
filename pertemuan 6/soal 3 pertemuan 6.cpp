#include <iostream>

int main() {
    int n = 1000; // Jumlah elemen dalam deret
    double S = 0.0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            S += 1.0 / i; // Jika i ganjil, tambahkan 1/i
        } else {
            S -= 1.0 / i; // Jika i genap, kurangkan 1/i
        }
    }

    std::cout << "Nilai S = " << S << std::endl;

    return 0;
}
