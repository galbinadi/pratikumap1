#include <iostream>
#include <vector>
#include <limits>

int main() {
    std::vector<double> data;
    double bilangan;

    for (int i = 1; i <= 10; i++) {
        std::cout << "Masukkan bilangan " << i << ": ";

        if (!(std::cin >> bilangan)) {
            std::cerr << "Input tidak valid. Harap masukkan angka." << std::endl;
            return 1;
        }

        data.push_back(bilangan);
    }

    double rata_rata = 0;
    double nilai_terkecil = std::numeric_limits<double>::max();
    double nilai_terbesar = std::numeric_limits<double>::min();

    for (const double &nilai : data) {
        rata_rata += nilai;
        if (nilai < nilai_terkecil) {
            nilai_terkecil = nilai;
        }
        if (nilai > nilai_terbesar) {
            nilai_terbesar = nilai;
        }
    }

    rata_rata /= data.size();

    std::cout << "=====================" << std::endl;
    std::cout << "Nilai Rata-rata = " << rata_rata << std::endl;
    std::cout << "Nilai Terkecil = " << nilai_terkecil << std::endl;
    std::cout << "Nilai Terbesar = " << nilai_terbesar << std::endl;

    return 0;
}