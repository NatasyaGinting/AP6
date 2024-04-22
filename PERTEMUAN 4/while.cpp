#include <iostream>
using namespace std;
int main () {
    int angka = 1;
    while (angka <= 10) {
        cout << angka << " ";
    }
    // output: tampil angka 1 terus menerus


    int angka = 1;
    while (angka <= 10) {
        cout << angka << " ";
        angka ++;
    }
    // output: 1 2 3 4 5 6 7 8 9 10



    int angka = 1;
    while (angka <= 20) {
        if (angka % 2 == 0) {
            cout << angka << " ";
        }
        angka ++;
    }
    // output: 2 4 6 8 10 12 14 16 18 20
    
}