// Rumus volume limas segitiga:
// Volume limas = 1/3 * luas alas * tinggi limas
// luas alas = 1/2 * alas * tinggi alas


#include <iostream>
using namespace std;
int main() {
    float a, ts, tl, luasalas, vlimas;

    cout << "Masukkan nilai alas: ";
    cin >> a;

    cout << "Masukkan nilai tinggi alas: ";
    cin >> ts;

    cout << "Masukkan nilai tinggi limas: ";
    cin >> tl;

    // menghitung luas alas
    luasalas = (a * ts) / 2;

    // menghitung volume limas segitiga
    vlimas = (luasalas * tl) / 3;

    cout << "Volume limas segitiga = " << vlimas << endl;
}