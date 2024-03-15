//Volume bola = 4 * phi * r * r

#include <iostream>
using namespace std;
int main() {
    const float phi = 3.14;

    float r, v;

    cout << "Masukkan jari-jari : ";
    cin >> r;

    v = (phi * r * r)/4;

    cout << "Volume bola = " << v << endl;

}