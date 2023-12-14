#include <iostream>
#include <string>

using namespace std;

// Definisikan struktur data untuk menyimpan informasi penjualan barang
struct Barang {
    string nama;
    int hargaPerItem;
    int jumlahTerjual;
    int totalPenjualan;
};

int main() {
    const int jumlahBarang = 3; // Jumlah barang yang dijual

    // Definisikan array untuk menyimpan data penjualan setiap barang
    Barang daftarBarang[jumlahBarang];

    // Input data harga setiap item barang (konstanta)
    for (int i = 0; i < jumlahBarang; ++i) {
        cout << "Masukkan harga per item untuk Barang " << i + 1 << ": Rp. ";
        cin >> daftarBarang[i].hargaPerItem;
    }

    // Input jumlah terjual untuk setiap item barang
    for (int i = 0; i < jumlahBarang; ++i) {
        cout << "Masukkan jumlah terjual untuk Barang " << i + 1 << ": ";
        cin >> daftarBarang[i].jumlahTerjual;

        // Hitung total penjualan untuk setiap item
        daftarBarang[i].totalPenjualan = daftarBarang[i].hargaPerItem * daftarBarang[i].jumlahTerjual;
    }

    // Hitung total penjualan Minimarket setiap harinya
    int totalPenjualanHarian = 0;
    for (int i = 0; i < jumlahBarang; ++i) {
        totalPenjualanHarian += daftarBarang[i].totalPenjualan;
    }

    // Cari item yang paling banyak terjual (laku)
    int indexItemLaku = 0;
    for (int i = 1; i < jumlahBarang; ++i) {
        if (daftarBarang[i].jumlahTerjual > daftarBarang[indexItemLaku].jumlahTerjual) {
            indexItemLaku = i;
        }
    }

    // Tampilkan total penjualan dan item yang paling laku
    cout << "\nTotal penjualan Minimarket hari ini: Rp. " << totalPenjualanHarian << endl;
    cout << "Item yang paling laku adalah Barang " << indexItemLaku + 1 << endl;

    return 0;
}
