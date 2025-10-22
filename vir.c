#include <stdio.h>

void tegangan(){
    float V, I, R;
    printf("masukkan I: ");
    scanf("%f", &I);
    printf("masukkan R: ");
    scanf("%f",&R);
    V = I * R;
    printf("nilai V: %.2f\n", V);
}

void arus(){
    float V, I, R;
    printf("masukkan V: ");
    scanf("%f", &V);
    printf("masukkan R: ");
    scanf("%f",&R);
    I = V / R;
    printf("nilai I: %.2f\n", I);
}

void hambatan(){
    float V, I, R;
    printf("masukkan V: ");
    scanf("%f", &V);
    printf("masukkan I: ");
    scanf("%f",&I);
    R = V / I;
    printf("nilai R: %.2f\n", R);
}

int main()
{
    char pilihan;
    printf("Mau hitung apa? (v, i, r): ");
    scanf(" %c", &pilihan);

    if(pilihan == 'v'){
        tegangan();
    }
    else if(pilihan == 'i'){
        arus();
    }
    else if(pilihan == 'r'){
        hambatan();
    }
    else {
        printf("Pilihan tidak valid!\n");
    }

    return 0;
}