#include <iostream>
using namespace std;
int main () {
    a:
    cout << "Hello World" << endl;
    goto d;

    b:
    cout << "Universitas Sumatera Utara" << endl;
    return 0;

    c:
    cout << "Fasilkom-TI" << endl;
    goto b;

    d:
    cout << "Ilmu Komputer" << endl;
    goto c;
    // output:
    // Hello World
    // Ilmu Komputer
    // Fasilkom-TI
    // Universitas Sumatera Utara


    int angka = 1;
    loop:
    cout << angka << " ";
    angka ++;
    if (angka <= 10) {
        goto loop;
    }
    // output: 1 2 3 4 5 6 7 8 9 10

}