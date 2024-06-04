#include <math.h>  // header perhitungan matematis

// fungsi untuk penjumlahan
int tambah(int a, int b) {
    return a + b;
}

// fungsi untuk pengurangan
int kurang(int a, int b) {
    return a - b;
}

// fungsi untuk perkalian
int kali(int a, int b) {
    return a * b;
}

// fungsi untuk pembagian, hasilnya adalah bilangan float
float bagi(int a, int b) {
    return static_cast<float>(a) / static_cast<float>(b);  // static_cast<float> => mengkonversi ke tipe data float
}

// fungsi untuk modulo (sisa hasil pembagian)
int modulo(int a, int b) {
    return a % b;
}

// fungsi untuk perpangkatan
int pangkat(int a, int b) {
    return pow(a, b);  // pow => fungsi perpangkatan
}