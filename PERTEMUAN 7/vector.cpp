#include <iostream>
#include <vector>  // header vector
using namespace std;

int main() {
    system("cls");  // membersihkan tampilan layar

    //? Vector Decalaration and Initialization (Deklarasi dan Inisialisasi Vector)
    vector<string> nama = {"Andi", "Budi", "Santi", "Wanto", "Denis"};


    // Accessing Elements in Vector (Mengakses elemen dalam vector)
    for(int i = 0; i < nama.size(); i++) {
        cout << nama[i] << endl;
    }
    cout << endl;


    // For Each Loop
    for(string mhs : nama) {
        cout << mhs << endl;
    }


    // Adding Data to Vector (menambah data ke vector)
    nama.push_back("Wawan");


    // Deleting Data from Vector (menghapus data dalam vector)
    nama.pop_back();        // berfungsi untuk menghapus data vector paling akhir
    nama.erase(nama.begin() + 2);       // erase() berfungsi untuk menghapus data, begin() untuk mendapatkan data vector paling awal
    

    for(int i = 0; i < nama.size(); i++) {
        cout << nama[i] << endl;
    }
}