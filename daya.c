#include <stdio.h>
void dayaListrik(){
   float P,V,I;
   printf("| * * * * * * *Kalkulator Daya Listrik* * * * * * * |\n");
   printf("Mau Hitung Apa? (P/V/I): ");
   char pilihan;
   scanf(" %c",&pilihan);
    if (pilihan=='p' || pilihan=='P'){
     printf("Masukkan V (Tegangan dalam Volt): ");
     scanf("%f",&V);
     printf("Masukkan I (Arus dalam Ampere): ");
     scanf("%f",&I);
     P=V*I;
     printf("Nilai P (Daya dalam Watt): %.2f W\n", P);
   }else if(pilihan=='v'||pilihan=='V'){
     printf("Masukkan P (Daya dalam Watt): ");
     scanf("%f",&P);
     printf("Masukkan I (Arus dalam Ampere): ");
     scanf("%f",&I);
     V=P/I;
     printf("Nilai V (Tegangan dalam Volt): %.2f V\n", V);
   }else if(pilihan=='i'||pilihan=='I'){
     printf("Masukkan P (Daya dalam Watt): ");
     scanf("%f",&P);
     printf("Masukkan V (Tegangan dalam Volt): ");
     scanf("%f",&V);
     I=P/V;
     printf("Nilai I (Arus dalam Ampere): %.2f A\n", I);
   } else {
        printf("Pilihan tidak valid. Silakan pilih P, V, atau I.\n");
   }
}
int main(){
    dayaListrik();
    return 0;
}