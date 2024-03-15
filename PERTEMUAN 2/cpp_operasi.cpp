#include <iostream>
using namespace std;
int main() {
    int a, b;

    //Assignment operator: masukkan data ke variabel
    a = 5;
    b = 7;

    //Arithmatic operator
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = a / b;
    int mod = a % b;

    cout << "a + b = " << tambah << endl;
    cout << "a - b = " << kurang << endl;
    cout << "a * b = " << kali << endl;
    cout << "a / b = " << bagi << endl;
    cout << "a % b = " << mod << endl;

    //Relational operator
    cout << (a == b) << endl;
    cout << (a < b) << endl;
    cout << (a <= b) << endl;
    cout << (a > b) << endl;
    cout << (a >= b) << endl;
    cout << (a != b) << endl;

    //Logical operator
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;

    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false || true) << endl;
    cout << (false || false) << endl;

    cout << !true << endl;
    cout << !false << endl;

    //Bitwise operator
    cout << (4 & 7) << endl;
    cout << (4 | 7) << endl;
    cout << (4 ^ 7) << endl;
    cout << (~4) << endl;
    cout << (7 << 2) << endl;
    cout << (7 >> 2) << endl;

    //shorthand
    a = a + 2;
    a += 2;
    a -= 2;
    a *= 2;
    a /= 2;

    b = b + 3;
    b += 3;
    b -= 3;
    b *=3;
    b /= 3;

    //Increment & Decrement operator
    //Post Increment
    cout << a++ << endl;
    cout << a << endl;

    //Pre Increment
    cout << a << endl;
    cout << ++a << endl;

    cout << endl;

    //Post Decrement
    cout << b-- << endl;
    cout << b << endl;

    //Pre Decrement
    cout << b << endl;
    cout << --b << endl;

    }