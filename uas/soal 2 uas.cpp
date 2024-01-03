#include <iostream>
#include <algorithm>

using namespace std;

struct Anak {
    string nama;
    int tanggalLahir;
    int bulanLahir;
    int tahunLahir;
};

bool bandingkanTahun(const Anak& anak1, const Anak& anak2) {
    return anak1.tahunLahir < anak2.tahunLahir;
}

int main() {
    const int jumlahData = 20;
    Anak dataAnak[jumlahData];

    
    for (int i = 0; i < jumlahData; ++i) {
        cout << "Masukkan data anak ke-" << i + 1 << ":\n";
        cout << "Nama: ";
        cin >> dataAnak[i].nama;
        cout << "Tanggal Lahir (DD MM YYYY): ";
        cin >> dataAnak[i].tanggalLahir >> dataAnak[i].bulanLahir >> dataAnak[i].tahunLahir;
    }


    sort(dataAnak, dataAnak + jumlahData, bandingkanTahun);


    cout << "\nData Anak Sebelum Terurut:\n";
    for (int i = 0; i < jumlahData; ++i) {
        cout << "Nama: " << dataAnak[i].nama << ", Tanggal Lahir: "
             << dataAnak[i].tanggalLahir << " " << dataAnak[i].bulanLahir << " " << dataAnak[i].tahunLahir << endl;
    }

    
    cout << "\nData Anak Setelah Terurut:\n";
    for (int i = 0; i < jumlahData; ++i) {
        cout << "Nama: " << dataAnak[i].nama << ", Tanggal Lahir: "
             << dataAnak[i].tanggalLahir << " " << dataAnak[i].bulanLahir << " " << dataAnak[i].tahunLahir << endl;
    }

    
    cout << "\nData Anak dengan Tahun Lahir 2020:\n";
    for (int i = 0; i < jumlahData; ++i) {
        if (dataAnak[i].tahunLahir == 2020) {
            cout << "Nama: " << dataAnak[i].nama << ", Tanggal Lahir: "
                 << dataAnak[i].tanggalLahir << " " << dataAnak[i].bulanLahir << " " << dataAnak[i].tahunLahir << endl;
        }
    }

    return 0;
}