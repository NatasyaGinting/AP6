#include <stdio.h>

int main ()  {
    char nama[50];
    int nim;
    char kom;
    float ip;

    printf("Hello World\n");

    printf("Masukkan Nama : ");
    // scanf("%s", &nama);
    gets(nama);     // gets: get string

    printf("Masukkan NIM : ");
    scanf("%d", &nim);

    printf("Masukkan KOM : ");
    scanf(" %c", &kom);

    printf("Masukkan IP : ");
    scanf("%f", &ip);

    // printf("Nama : %s/n", nama);
    printf("Nama : ");
    puts(nama);     // puts: put string

    printf("NIM : %d\n", nim);
    printf("KOM : %c\n", kom);
    printf("IP : %.2f\n", ip);
}