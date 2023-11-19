#include <iostream>
using namespace std;

int main() {
    const int ukuran = 7;
    int nilai[ukuran];

    for (int i = 0; i < ukuran; i++) {
        cout << "Masukkan bilangan untuk index ke-" << i << " :";
        cin >> nilai[i];
    }

    int cari;
    cout << "Masukkan data yang dicari: ";
    cin >> cari;

    int kiri = 0;
    int kanan = ukuran - 1;
    int hasil = -1;

    for (int i = 0; kiri <= kanan; i++) {
        int tengah = kiri + (kanan - kiri) / 2;

        if (nilai[tengah] == cari) {
            hasil = tengah;
            break;
        }

        if (nilai[tengah] < cari) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }

    if (hasil != -1) {
        cout << "Data ditemukan di index ke-" << hasil << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}