#include <iostream>
using namespace std;
int main() {
    int bil;
    string tipe;

    cout << "Masukkan bilangan: ";
    cin >> bil;

    tipe = (bil % 2 == 0) ? "Genap" : "Ganjil";
    cout << tipe << endl;

    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
}