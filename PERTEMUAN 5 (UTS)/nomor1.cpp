#include <iostream>
using namespace std;

int main() {
    int baris;
    int n = 1;

    cout << "masukkan jumlah baris: ";
    cin >> baris;
    
    for (int i = 1 ; i <= baris ; ++i) {
        for (int j = 1 ; j <= i ; ++j) {
            cout << n++ << " ";
            if (n > 28)
                break;
        }
        cout << endl;
    }
    
}


// output:
// masukkan jumlah baris: 7
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 21 
// 22 23 24 25 26 27 28