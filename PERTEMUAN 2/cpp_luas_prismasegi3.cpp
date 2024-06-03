// Rumus luas prisma segitiga:
// luas prisma segitiga = (2 * luas alas) + (keliling alas * tinggi prisma)
// luas alas = 1/2 * alas * tinggi alas


#include <iostream>
using namespace std;

int main() {
    float a, ta, tp, kelalas, luasalas, lprisma;

    cout << "Masukkan nilai alas: ";
    cin >> a;

    cout << "Masukkan nilai tinggi alas: ";
    cin >> ta;

    cout << "Masukkan nilai tinggi prisma: ";
    cin >> tp;

    // keliling alas = sisi 1 + sisi 2 + sisi 3
    cout << "Masukkan nilai keliling alas: ";
    cin >> kelalas;

    // menghitung luas alas
    luasalas = (a * ta) / 2;

    // menghitung luas prisma segitiga
    lprisma = (2 * luasalas) + (kelalas * tp);

    cout << "Luas prisma segitiga = " << lprisma << endl;
    
}