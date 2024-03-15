//Luas permukaan kerucut = phi * r * (r +s)

#include <iostream>
using namespace std;
int main() {
    const float phi = 3.14;

    float r, s, lp;

    cout << "Masukkan jari-jari : ";
    cin >> r;

    cout << "Masukkan garis pelukisnya : ";
    cin >> s;

    lp = phi * r * (r + s);

    cout << "Luas permukaan kerucut = " << lp << endl;

}