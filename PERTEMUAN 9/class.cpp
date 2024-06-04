#include <iostream>
#include <vector>  // header vector
using namespace std;

class Mahasiswa {
    // Access Modifier (Pengubah Akses)
    private:  // hanya mengakses dari class
        string nama, nim;
        float nilai;


    // Access Modifier (Pengubah Akses)
    public:  // mengakses diluar dari class
        // Constructor Method
        Mahasiswa(string nama, string nim, float nilai) {
            this -> nama = nama;
            this -> nim = nim;
            this -> nilai = nilai;
        }


        // Getter Method (hanya mengambil nama, nim, atau nilai saja)
        string getNama() {
            return this->nama;
        }

        string getNim() {
            return this->nim;
        }

        float getNilai() {
            return this->nilai;
        }

        // menampilkan data
        void display() {
            cout << "Nama  : " << this->getNama() << endl;
            cout << "NIM   : " << this->getNim() << endl;
            cout << "Nilai : " << this->getNilai() << endl;
        }
};


int main() {
    system("cls");  // membersihkan tampilan layar

    Mahasiswa mhs("Andi", "231401001", 87.2);    // inisialisasi
    mhs.display();

    //! Error
    cout << mhs.nama << endl;

    // Correct:
    cout << mhs.getNama() << endl;
    cout << mhs.getNim() << endl;
    cout << mhs.getNilai() << endl;


    vector<Mahasiswa> mahasiswa;
    int n;
    string nama, nim;
    float nilai;

    cout << "Masukkan jumlah mahasiswa : ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get();

        cout << "Masukkan nama : ";
        getline(cin, nama);

        cout << "Masukkan NIM : ";
        cin >> nim;

        cout << "Masukkan nilai : ";
        cin >> nilai;

        Mahasiswa mhs(nama, nim, nilai);
        mahasiswa.push_back(mhs);  // push_back: menambah data
    }

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        mahasiswa[i].display();
    }
}