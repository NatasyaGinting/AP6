// tambah
int tambah(int a, int b) {
    return a + b;
}

// kurang
int kurang(int a, int b) {
    return a - b;
}

// kali
int kali(int a, int b) {
    return a * b;
}

// bagi
float bagi(int a, int b) {
    return static_cast<float>(a) / static_cast<float>(b);  // static_cast<float> => mengkonversi ke tipe data float
}