#include <stdio.h>

void binerDesimal(char biner[]) {
    int desimal = 0;
    int i = 0;

    while (biner[i] != '\0') {
        if (biner[i] != '0' && biner[i] != '1') {
            printf("Input tidak valid! Hanya boleh 0 atau 1.\n");
            return;
        }

        desimal = desimal * 2 + (biner[i] - '0');
        i++;
    }

    printf("Hasil konversi desimal: %d\n", desimal);
}

int main() {
    char biner[100];

    printf("Masukkan bilangan biner: ");
    scanf("%s", biner);

    binerDesimal(biner); 

    return 0;
}