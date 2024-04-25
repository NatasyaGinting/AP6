#include <iostream>
using namespace std;

int main() {
    int x, y = 0, bil;

    cout << "masukkan bilangan (tidak bilangan negatif): ";
    cin >> x;

    if (x < 0) {
        cout << "bilangan tidak valid (masukkan bilangan positif)" << endl;
    }

    while (x != 0) {
        bil = x % 10;
        y += bil;
        x /= 10;
    }

    cout << "hasilnya adalah" << ": " << y << endl;

    return 0;

}


// output:
// masukkan bilangan (tidak bilangan negatif): 5678
// hasilnya adalah: 26