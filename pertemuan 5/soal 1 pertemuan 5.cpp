#include <iostream>
#include <ctime>

using namespace std;

// Fungsi untuk menentukan apakah tahun adalah tahun kabisat
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Fungsi untuk menambahkan sejumlah hari ke tanggal tertentu
void addDaysToDate(int &day, int &month, int &year, int daysToAdd) {
    const int daysInMonth[] = {0, 31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (daysToAdd > 0) {
        int daysInCurrentMonth = daysInMonth[month] - day + 1;

        if (daysToAdd >= daysInCurrentMonth) {
            // Pindah ke bulan berikutnya
            daysToAdd -= daysInCurrentMonth;
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        } else {
            // Tambahkan sejumlah hari yang tersisa
            day += daysToAdd;
            daysToAdd = 0;
        }
    }
}

int main() {
    int day, month, year, daysToAdd;

    cout << "Masukkan tanggal (1-31): ";
    cin >> day;

    cout << "Masukkan bulan (1-12): ";
    cin >> month;

    cout << "Masukkan tahun (misalnya 2023): ";
    cin >> year;

    cout << "Masukkan jumlah hari yang akan ditambahkan: ";
    cin >> daysToAdd;

    // Validasi tanggal, bulan, dan tahun
    if (day < 1 || day > 31 || month < 1 || month > 12 || year < 0) {
        cout << "Tanggal, bulan, atau tahun tidak valid." << endl;
        return 1;
    }

    addDaysToDate(day, month, year, daysToAdd);

    cout << "Tanggal setelah penambahan " << daysToAdd << " hari: " << day << "/" << month << "/" << year << endl;

    return 0;
}