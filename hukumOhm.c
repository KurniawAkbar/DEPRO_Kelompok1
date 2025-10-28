#include <stdio.h>
void hukumOhm(){
    char pilihan;
    float V, I, R;
    printf("| * * * * * * * Kalkulator Hukum Ohm * * * * * * * |\n");
    printf("Hukum Ohm: V = I * R\n");
    printf("Hitung Apa? (V/I/R): ");
    scanf(" %c", &pilihan);
    if(pilihan == 'V' || pilihan == 'v'){
        printf("Masukkan I (arus dalam ampere): ");
        scanf("%f", &I);
        printf("Masukkan R (resistansi dalam ohm): ");
        scanf("%f", &R);
        V = I * R;
        printf("Nilai V (tegangan dalam volt): %.2f V\n", V);
    } else if(pilihan == 'I' || pilihan == 'i'){
        printf("Masukkan V (tegangan dalam volt): ");
        scanf("%f", &V);
        printf("Masukkan R (resistansi dalam ohm): ");
        scanf("%f", &R);
        if(R != 0){
            I = V / R;
            printf("Nilai I (arus dalam ampere): %.2f A\n", I);
        } else {
            printf("Resistansi tidak boleh nol.\n");
        }
    } else if(pilihan == 'R' || pilihan == 'r'){
        printf("Masukkan V (tegangan dalam volt): ");
        scanf("%f", &V);
        printf("Masukkan I (arus dalam ampere): ");
        scanf("%f", &I);
        if(I != 0){
            R = V / I;
            printf("Nilai R (resistansi dalam ohm): %.2f Ohm\n", R);
        } else {
            printf("Arus tidak boleh nol.\n");
        }
    } else {
        printf("Pilihan tidak valid. Silakan pilih V, I, atau R.\n");
    }
}
int main(){
    hukumOhm();
    return 0;
}