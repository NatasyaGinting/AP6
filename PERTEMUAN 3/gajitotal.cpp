#include <iostream>
#include <iomanip>  // library untuk mengatur koma
using namespace std;

int main() {
    string nama;
    int gol, anak;
    float tambuang, gajpok, gajtot;

    const float pajak = 0.95;  // konstanta pajak = 0.95

    cout << "Masukkan nama anda: ";
    cin >> nama;
    cout << "Masukkan golongan anda (1,2,3): ";
    cin >> gol;

    // condition 1
    if (gol == 1)
    { cout << "Gaji pokok anda Rp5000000" << endl; 
    gajpok = 5000000; }
    else if (gol == 2)
    { cout << "Gaji pokok anda Rp3000000" << endl; 
    gajpok = 3000000; }
    else if (gol == 3)
    { cout << "Gaji pokok anda Rp2500000" << endl; 
    gajpok = 2500000; }
    else
    { cout << "Golongan anda tidak valid" << endl; }

    cout << "Masukkan jumlah anak anda: ";
    cin >> anak;

    // condition 2
    if (anak == 1 || anak == 2)
    { cout << "Anda mendapat tambahan uang Rp500000 per anak" << endl;
    tambuang = anak * 500000; }
    else if (anak > 2)
    { cout << "Anda mendapat tambahan uang Rp750000 per anak" << endl;
    tambuang = anak * 750000; }
    else
    { cout << "Anda tidak mendapat tambahan uang" << endl; 
    tambuang = 0; }

    gajtot = (gajpok + tambuang) * pajak;

    cout << "Gaji total anda adalah Rp" << fixed << setprecision(0) << gajtot << endl;  // tidak ada digit yang tampil setelah titik desimal (koma)

    return 0;
}