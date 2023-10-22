#include <iostream>

int main() {
    char startChar = 'A';
    int rows = 5; // Jumlah baris yang ingin dicetak

    for (int i = 0; i < rows; i++) {
        for (int j = i; j < 26; j++) {
            std::cout << static_cast<char>(startChar + j);
        }
        std::cout << std::endl;
    }

    // Cetak bagian akhir
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 26 - i; j++) {
            std::cout << static_cast<char>(startChar + j + i);
        }
        std::cout << std::endl;
    }

    return 0;
}
