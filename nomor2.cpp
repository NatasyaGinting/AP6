#include <iostream>
using namespace std;

int main() {

    int x, y = 0, bil;

    cout << "masukkan bilangan (tidak bil negatif): ";
    cin >> x;

    if (x < 0) {
        cout << "bilangan tidak valid" << endl;
    }

    while (x != 0) {
        bil = x % 10;
        y += bil;
        x /= 10;
    }

    cout << "Hasilnya adalah" << ":" << y << endl;

    return 0;
    
}