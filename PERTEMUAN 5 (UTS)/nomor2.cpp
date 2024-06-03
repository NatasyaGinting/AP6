#include <iostream>
using namespace std;

int main() {
    int x, y = 0, bil;

    cout << "masukkan bilangan (tidak bilangan negatif): ";
    cin >> x;

    if (x < 0) {
        cout << "bilangan tidak valid (masukkan bilangan positif)" << endl;
    }

    while (x != 0) {  // perulangan while untuk x tidak sama dengan 0
        bil = x % 10;  // mengambil digit terakhir dari x dengan menggunakan operasi modulus (%)
        y += bil;  // menjumlahkan digit terakhir tersebut ke variabel y (jumlah dari semua digit)
        x /= 10;  // membuang digit terakhir dari x dengan membagi x dengan 10 (integer division)
    }

    cout << "hasilnya adalah" << ": " << y << endl;

    return 0;

}


// output:
// masukkan bilangan (tidak bilangan negatif): 5678
// hasilnya adalah: 26