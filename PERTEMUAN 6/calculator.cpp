#include <iostream>
#include "calc.h"  // memanggil header calc.h

using namespace std;

void garis() {
    cout << "====================================" << endl;
}

void bintang() {
    cout << "************************************" << endl;
}

void menu() {
    garis();
    cout << "Selamat Datang di Program Kalkulator" << endl;
    garis();
    cout << "1. Tambah\n2. Kurang\n3. Kali\n4. Bagi\n5. Modulo\n6. Pangkat" << endl;
    garis();
}

int main() {
    char cont;

    do {
        system("cls");  // membersihkan tampilan layar

        int operasi, a, b;
        float hasil;

        menu();
        cout << "Masukkan operasi : ";
        cin >> operasi;

        cout << "Masukkan angka pertama : ";
        cin >> a;

        cout << "Masukkan angka kedua : ";
        cin >> b;

        // memilih operasi perhitungan
        switch(operasi) {
            case 1:
                hasil = tambah(a, b);
                break;
            case 2:
                hasil = kurang(a, b);
                break;
            case 3:
                hasil = kali(a, b);
                break;
            case 4:
                hasil = bagi(a, b);
                break;
            case 5:
                hasil = modulo(a, b);
                break;
            case 6:
                hasil = pangkat(a, b);
                break;
        }

        cout << "Hasil = " << hasil << endl;

        cout << "Apakah Anda ingin melanjutkan? [Y/N] : ";
        cin >> cont;
    } while(toupper(cont) == 'Y');  // toupper => mengubah karakter huruf kecil ke huruf besar

    bintang();
    cout << "Terima Kasih Telah Menggunakan Program Kalkulator" << endl;

    return 0;
}