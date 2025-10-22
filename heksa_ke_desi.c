//Kalkulator Konversi Heksadesimal ke Desimal
#include <stdio.h>
#include <ctype.h>  

void heksaDesimal() {
    char c;
    int desimal = 0;
    int nilai;

    printf("Masukkan bilangan heksadesimal: ");

    while ((c = getchar()) != '\n' && c != EOF) {
        c = toupper(c); 

        if (c >= '0' && c <= '9') {
            nilai = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            nilai = c - 'A' + 10;
        } else {
            printf("Input tidak valid! Heksadesimal hanya boleh 0–9 atau A–F.\n");
            return;
        }

        desimal = desimal * 16 + nilai;
    }

    printf("Hasil konversi desimal: %d\n", desimal);
}

int main() {
    heksaDesimal();
    return 0;
}
