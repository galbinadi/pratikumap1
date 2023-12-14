#include <iostream>
using namespace std;

int main() {
    // Ketentuan tarif
    double tarifPerKwh = 1450.0; // Tarif per kWh

    // Penggunaan listrik harian (dalam Wh)
    int ac;
    int kulkas;
    int strika;
    int mesinCuci;
    int lampuLampu;
    int lainnya;

  cout << "Masukkan penggunaan listrik harian (dalam Wh):" << endl;
  cout << "AC: ";
  cin >> ac;
  cout << "Kulkas: ";
  cin >> kulkas;
  cout << "Strika: ";
  cin >> strika;
  cout << "Mesin Cuci: ";
  cin >> mesinCuci;
  cout << "Lampu Lampu: ";
  cin >> lampuLampu;
  cout << "Lainnya: ";
  cin >> lainnya;
  // Hitung total penggunaan listrik harian (dalam Wh)
  int totalPenggunaanHarian = ac + kulkas + strika + mesinCuci + lampuLampu + lainnya;

    // Hitung total penggunaan listrik bulanan (dalam kWh)
    double totalPenggunaanBulanan = totalPenggunaanHarian * 30 / 1000.0; // 30 hari dalam sebulan

    // Hitung biaya pembayaran listrik bulanan
    double biayaBulanan = totalPenggunaanBulanan * tarifPerKwh;

    // Tampilkan hasil
    cout << "Biaya pembayaran listrik bulanan: Rp." << biayaBulanan << endl;

    return 0;
}
