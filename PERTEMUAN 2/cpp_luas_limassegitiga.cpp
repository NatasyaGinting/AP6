// Rumus luas permukaan limas segitiga:
// L = Luas alas + luas selubung (luas sisi tegak)
// L = (1/2 * a * t) + (3 * luas sisi tegak)
// luas sisi tegak = alas * tinggi


#include <iostream>
using namespace std;

int main() {
    float a, t, luasalas, luassisteg, lplimas;

    cout << "Masukkan nilai sisi alas: ";
    cin >> a;

    cout << "Masukkan nilai tinggi: ";
    cin >> t;

    // menghitung luas alas
    luasalas = (a * t) / 2;

    // menghitung luas selubung (luas sisi tegak)
    luassisteg = 3 * a * t;

    // menghitung luas permukaan limas
    lplimas = luasalas + luassisteg;

    cout << "Luas limas = " << lplimas << endl;
    
}