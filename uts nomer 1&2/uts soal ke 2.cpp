#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double tabunganUSD = 12000.0;
    double tabunganEuro = 20000.0;
    double kursUSD_to_Rupiah = 15000.0;
    double kursEuro_to_USD = 0.997;
    double hargaMobilRupiah = 425000000.0;
    double tabunganRupiah = (tabunganUSD * kursUSD_to_Rupiah) + (tabunganEuro * kursEuro_to_USD * kursUSD_to_Rupiah);
    double sisaDana = tabunganRupiah - hargaMobilRupiah;

    cout << fixed << setprecision(0); 
    cout << "uang pak Anto setelah dikonversi ke rupiah: " << tabunganRupiah << " rupiah" << endl;
    cout << "Sisa uang pak Anto setelah membeli mobil: " << sisaDana << " rupiah" << endl;

    return 0;
}