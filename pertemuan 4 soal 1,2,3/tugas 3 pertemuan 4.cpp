#include <iostream>
#include <string>
using namespace std;

int main() {
    // Daftar tipe rumah dan bonus yang sesuai
    string tipeRumah;
    double bonus = 0.0;

    cout << "Masukkan tipe rumah (A/B/C): ";
    cin >> tipeRumah;

    if (tipeRumah == "A") {
        bonus = 5000.0;
    } else if (tipeRumah == "B") {
        bonus = 3000.0;
    } else if (tipeRumah == "C") {
        bonus = 1000.0;
    } else {
        cout << "Tipe rumah tidak valid." << endl;
        return 1;
    }

    cout << "Bonus yang diterima: $" << bonus << endl;

    return 0;
}