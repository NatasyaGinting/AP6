#include <iostream>
using namespace std;

int main () {
    
    for (int i = 1 ; i <= 10 ; i++) {
        cout << "Hello World" << endl;
    }
    // output: tampil Hello World sebanyak 10 kali


    for (int i = 1 ; i <= 20 ; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    // output: 2 4 6 8 10 12 14 16 18 20


    for (int baris = 1 ; baris <= 4 ; baris++) {
        for (int kolom = 1 ; kolom <= 4 ; kolom++) {
            cout << "* ";
        }
        cout << endl;
    }
    // output:
    // * * * *
    // * * * *
    // * * * *
    // * * * *
    

    for (int i = 1 ; i <= 4 ; i++) {
        for (int j = 1 ; j <= i ; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    // output: 
    // * 
    // * *
    // * * * 
    // * * * * 



    int n, num = 0, sum = 0;
    // num = nilai suku dari deret ; sum = jumlah total dari semua suku

    cout << "Masukkan suku ke: ";
    cin >> n;

    for (int i = 1 ; i <= n ; i++) {
        if (i % 2 == 0) {
            num = num;
        } else {
            num += 5;
        }
        sum += num;

        cout << num << " ";
    }
    cout << endl;
    
    cout << "Suku ke " << n << " adalah " << num << endl;
    cout << "Jumlah hingga suku ke " << n << " adalah " << sum << endl;

}
// output:
// Masukkan suku ke: 6
// 5 5 10 10 15 15 
// Suku ke 6 adalah 15
// Jumlah hingga suku ke 6 adalah 60