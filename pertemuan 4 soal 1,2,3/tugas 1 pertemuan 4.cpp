#include <iostream>
using namespace std;

const double DISCOUNT_10 = 0.10;
const double DISCOUNT_20 = 0.20;
const double DISCOUNT_30 = 0.30;
const double ADDITIONAL_DISCOUNT = 0.05;

int main() {
    double roomRate, taxRate;
    int numRooms, numDays;

    cout << "Masukkan biaya sewa satu kamar: $";
    cin >> roomRate;

    cout << "Masukkan jumlah kamar yang dipesan: ";
    cin >> numRooms;

    cout << "Masukkan jumlah hari pemesanan kamar: ";
    cin >> numDays;

    cout << "Masukkan pajak penjualan dalam persen: ";
    cin >> taxRate;

    double subtotal = roomRate * numRooms * numDays;
    double discount = 0.0;

    if (numRooms >= 30) {
        discount = subtotal * DISCOUNT_30;
    } else if (numRooms >= 20) {
        discount = subtotal * DISCOUNT_20;
    } else if (numRooms >= 10) {
        discount = subtotal * DISCOUNT_10;
    }

    if (numDays >= 3) {
        discount += subtotal * ADDITIONAL_DISCOUNT;
    }

    double totalRoomCost = subtotal - discount;
    double taxAmount = totalRoomCost * (taxRate / 100);
    double totalBill = totalRoomCost + taxAmount;

    cout << "\nBiaya sewa satu kamar: $" << roomRate << endl;
    cout << "Diskon kamar dalam persen: " << (discount / subtotal) * 100 << "%" << endl;
    cout << "Jumlah kamar yang dipesan: " << numRooms << endl;
    cout << "Jumlah hari pemesanan kamar: " << numDays << endl;
    cout << "Total biaya kamar: $" << totalRoomCost << endl;
    cout << "Pajak penjualan: $" << taxAmount << " (" << taxRate << "%)" << endl;
    cout << "Total jumlah tagihan: $" << totalBill << endl;

    return 0;
}