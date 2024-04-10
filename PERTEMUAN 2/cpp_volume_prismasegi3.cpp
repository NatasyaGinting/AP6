// Rumus volume prisma segitiga:
// Volume prisma = luas alas * tinggi prisma
// luas alas = 1/2 * alas * tinggi alas

#include <iostream>
using namespace std;
int main () {
    float a, ta, tp, luasalas, vprisma;

    cout << "Masukkan nilai alas: ";
    cin >> a;

    cout << "Masukkan nilai tinggi alas: ";
    cin >> ta;

    cout << "Masukkan nilai tinggi prisma: ";
    cin >> tp;

    // menghitung luas alas
    luasalas = (a * ta) / 2;

    // menghitung volume prisma
    vprisma = luasalas * tp;

    cout << " Volume prisma segitiga = " << vprisma << endl;
}