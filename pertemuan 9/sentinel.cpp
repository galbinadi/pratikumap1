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

    int terakhir = nilai[ukuran - 1];
    nilai[ukuran - 1] = cari;

    int i;
    for (i = 0; nilai[i] != cari; i++) {
    }

    nilai[ukuran - 1] = terakhir;
    if (i < ukuran - 1 || nilai[ukuran - 1] == cari) {
        cout << "Data ditemukan di index ke-" << i << endl;
    } else {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}