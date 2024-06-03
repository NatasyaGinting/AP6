//Luas permukaan bola = 4/3 * phi * r * r * r


#include <iostream>
using namespace std;

int main() {
    const float phi = 3.14;

    float r, lp;

    cout << "Masukkan jari-jari : ";
    cin >> r;

    lp = (4 * phi * r * r * r)/3;

    cout << "Luas permukaan bola = " << lp << endl;

}