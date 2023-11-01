#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <ctime>

// Fungsi untuk mengonversi huruf menjadi karakter dua langkah setelahnya
char convertLetter(char letter) {
    if (isalpha(letter)) {
        char base = islower(letter) ? 'a' : 'A';
        return ((letter - base + 2) % 26) + base;
    }
    return letter;
}

// Fungsi untuk mengonversi angka menjadi 2 kali angka tersebut
char convertDigit(char digit) {
    if (isdigit(digit)) {
        int num = digit - '0';
        return '0' + (num * 2);
    }
    return digit;
}

int main() {
    std::string password;
    std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    while (password.length() < 8) {
        char randomChar = characters[std::rand() % characters.length()];

        randomChar = convertLetter(randomChar);
        randomChar = convertDigit(randomChar);

        // Memastikan tidak ada karakter yang berulang
        if (password.find(randomChar) == std::string::npos) {
            password += randomChar;
        }
    }

    std::cout << "Password: " << password << std::endl;

    return 0;
}


