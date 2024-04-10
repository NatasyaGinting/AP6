 #include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float bb, tb, bmi;

    cout << "Masukkan berat badan anda (kg): ";
    cin >> bb;
    
    cout << "Masukkan tinggi badan anda (m): ";
    cin >> tb;

    bmi = bb / (tb * tb);

    cout << "BMI anda adalah: " << fixed << setprecision(2) << bmi << endl;

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