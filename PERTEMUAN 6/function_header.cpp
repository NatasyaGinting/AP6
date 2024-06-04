#include <iostream>
#include "operasi.h"  // memanggil header operasi.h
#include "preprocessor.h"  // memanggil header preprocessor.h

uns;  // uns => using namespace std (header preprocessor.h)

void sayHello(string name) {
    o << "Hello " << name << n;  // o => cout ; n => endl (header preprocessor.h)
}

void garis() {
    o << "================" << n;
}

void bintang() {
    o << "***************" << n;
}

int main() {
    system("cls");  // membersihkan tampilan layar
    sayHello("AP6");
    garis();
    bintang();
    // header operasi.h
    o << tambah(2, 3) << n;
    o << kurang(2, 3) << n;
    o << kali(2, 3) << n;
    o << bagi(2, 3) << n;
    o << PI << n;  // PI = phi = 3.14 (header preprocessor.h)
    return 0;
}