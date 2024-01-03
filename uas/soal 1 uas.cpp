#include <iostream>
#include <string>
using namespace std;

string enkripsiPassword(const string& password) {
    string encryptedPassword = "";
    for (char c : password) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) { 
            char encryptedChar = c + 2;
            if ((c >= 'A' && c <= 'Z') && encryptedChar > 'Z') {
                encryptedChar -= 26;
            } else if ((c >= 'a' && c <= 'z') && encryptedChar > 'z') {
                encryptedChar -= 26;
            }
            encryptedPassword += encryptedChar;
        } else if (c >= '0' && c <= '9') { 
            int digit = c - '0';
            int encryptedDigit = digit * 2;
            if (encryptedDigit >= 10) {
                encryptedDigit -= 10;
            }
            encryptedPassword += to_string(encryptedDigit);
        } else {
        }
    }
    return encryptedPassword;
}

int main() {
    string password;
    cout << "Masukkan password (maksimal 8 karakter, tanpa karakter berulang, tanpa spasi): ";
    cin >> password;

    bool valid = true;
    if (password.length() > 8 || password.empty()) {
        valid = false;
    } else {
        for (size_t i = 0; i < password.length(); i++) {
            for (size_t j = i + 1; j < password.length(); j++) {
                if (password[i] == password[j] || password[i] == ' ' || password[j] == ' ') {
                    valid = false;
                    break;
                }
            }
            if (!valid) {
                break;
            }
        }
    }

    if (valid) {
        string encryptedPassword = enkripsiPassword(password);
        cout << "Password yang Anda masukkan: " << password << endl;
        cout << "Password yang tersimpan (hasil konversi): " << encryptedPassword << endl;
    } else {
        cout << "Password tidak valid." << endl;
    }

    return 0;
}