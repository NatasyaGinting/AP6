#include <iostream>
#include <iomanip>     // library untuk mengatur koma
using namespace std;

int main ()   {
    string nama;
    int nim;
    char kom;
    float ip;

    system("CLS");

    cout << "Hello World" << endl;

    cout << "Masukkan Nama : ";
    // cin >> nama;   // cin: hanya mampu memasukkan satu kata dalam satu input
    getline(cin, nama);   // getline: mampu memasukkan banyak kata dalam satu input

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan IP : ";
    cin >> ip;

    system("CLS");
    
    cout << "Nama : " << nama << endl;
    cout << "NIM : " << nim << endl;
    cout << "KOM : " << kom << endl;

    cout << fixed << setprecision(2);     // untuk mengatur angka dibelakang koma (2 angka dibelakang koma)

    cout << "IP : " << ip << endl;

    return 0;

}