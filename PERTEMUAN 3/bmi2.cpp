#include <iostream>
#include <iomanip>  // library untuk mengatur koma
using namespace std;

int main() {
    float bb, tb, tbtot, bmi;

    cout << "Masukkan berat badan anda (kg): ";
    cin >> bb;
    
    cout << "Masukkan tinggi badan anda (cm): ";
    cin >> tb;

    tbtot = ((tb / 100) * (tb / 100));
    bmi = bb / tbtot;

    cout << "BMI anda adalah: " << fixed << setprecision(2) << bmi << endl;  // hanya 2 digit yang tampil setelah titik desimal (koma)

    if (bmi < 18.5)
    { cout << "Kategori berat badan kurang" << endl; }
    else if (bmi >= 18.5 && bmi < 25)
    { cout << "Kategori berat badan normal" << endl; }
    else if (bmi >= 25 && bmi < 30)
    { cout << "Kategori berat badan berlebih" << endl; }
    else if (bmi >= 30)
    { cout << "Kategori obesitas" << endl; }

    return 0;
}