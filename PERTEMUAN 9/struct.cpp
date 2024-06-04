#include <iostream>
#include <vector>  // header vector
using namespace std;

struct Mahasiswa {  // diawali dengan huruf kapital ; struktur mahasiswa terdiri dari nama, nim, dan nilai
    string nama, nim;
    float nilai;
};

typedef struct {  // tipe data siswa terdiri dari struktur nama dan nim
    string nama, nim;
} Siswa;

int main() {
    system("cls");  // membersihkan tampilan layar

    Mahasiswa mhs;
    vector<Mahasiswa> mahasiswa;
    int n;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cin.get();

        cout << "Masukkan nama : ";
        getline(cin, mhs.nama);

        cout << "Masukkan NIM : ";
        cin >> mhs.nim;

        cout << "Masukkan nilai : ";
        cin >> mhs.nilai;

        mahasiswa.push_back(mhs);  // push_back: menambah data
    }

    // menampilkan data mahasiswa
    for (int i = 0; i < n; i++) {
        cout << mahasiswa[i].nama << " memiliki NIM " << mahasiswa[i].nim << " dan nilai " << mahasiswa[i].nilai << endl;
    }
}