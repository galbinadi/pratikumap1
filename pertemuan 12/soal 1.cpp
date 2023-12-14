#include <iostream>
using namespace std;
int main() {
    // Input nilai awal
    int X ;
    int Y ;
    // masukan angka variabel
  cout << "masukan nilai x = ";
  cin >> X;
  cout << "masukan nilai y = ";
  cin >> Y;
  cout << "Sebelum ditukar, Nilai X = " << X << " Nilai Y ="<< Y << endl;
    // Tukar nilai menggunakan variabel sementara
    int temp = X;
    X = Y;
    Y = temp;
    // Output setelah pertukaran
  cout << "Setelah ditukar, Nilai X = " << X <<" Nilai Y = " << Y <<endl;

    return 0;
}
