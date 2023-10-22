#include <iostream>

int main() {
    int banyak_baris;

    std::cout << "Masukkan banyaknya baris: ";
    std::cin >> banyak_baris;

    for (int i = 1; i <= banyak_baris; i++) {
        // Mencetak bintang pada setiap baris
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        // Pindah ke baris berikutnya
        std::cout << std::endl;
    }

    return 0;
}
