#include <iostream>
using namespace std;

int main() {
    const int POINTS_PER_INCH = 72;
    double paperWidth, paperLength, topMargin, bottomMargin, leftMargin, rightMargin, fontSize;
    char spacingChoice;
    
    cout << "Masukkan panjang kertas (inci): ";
    cin >> paperLength;
    cout << "Masukkan lebar kertas (inci): ";
    cin >> paperWidth;
    cout << "Masukkan margin atas (inci): ";
    cin >> topMargin;
    cout << "Masukkan margin bawah (inci): ";
    cin >> bottomMargin;
    cout << "Masukkan margin kiri (inci): ";
    cin >> leftMargin;
    cout << "Masukkan margin kanan (inci): ";
    cin >> rightMargin;
    cout << "Masukkan ukuran titik suatu garis (poin): ";
    cin >> fontSize;
    cout << "Apakah garis diberi spasi ganda? (Y/N): ";
    cin >> spacingChoice;
    
    double effectivePaperWidth = paperWidth - leftMargin - rightMargin;
    double effectivePaperLength = paperLength - topMargin - bottomMargin;
    
    int charactersPerLine = static_cast<int>(effectivePaperWidth / (fontSize / POINTS_PER_INCH));
    int linesPerPage = static_cast<int>(effectivePaperLength / (fontSize / POINTS_PER_INCH));
    
    if (spacingChoice == 'Y' || spacingChoice == 'y') {
        charactersPerLine *= 2; // Double spacing
    }
    
    cout << "Jumlah karakter dalam satu baris: " << charactersPerLine << endl;
    cout << "Jumlah baris yang dapat dicetak pada kertas: " << linesPerPage << endl;
    
    return 0;
}