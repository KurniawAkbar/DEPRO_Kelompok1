#include <stdio.h>
#include <ctype.h>
void menu(){
    for(int i=0;i<26;i++){
        printf("<>");
    }
    printf("\n");
    printf("|   TOOLKIT LENGKAP ASISTEN LABORATORIUM ELEKTRO   |");
    printf("\n");
    for(int i=0;i<26;i++){
        printf("<>");
    }
    printf("\n");
    printf("| ============ Masukkan Pilihan (1-9) ============ |\n");
    for(int i=0;i<26;i++){
        printf("<>");
    }
    printf("\n");
    printf("|---------- Verifikasi Rangkaian Listrik ----------|\n");
    printf("| 1. Kalkulator Hukum Ohm                          |\n");
    printf("| 2. Kalkulator Daya Listrik                       |\n");
    printf("| 3. Kalkulator Resistor Seri                      |\n");
    printf("| 4. Kalkulator Resistor Paralel                   |\n");
    printf("|------------- Utilitas Sistem Digital ------------|\n");
    printf("| 5. Desimal -> Biner / Oktal / Heksadesimal       |\n");
    printf("| 6. Biner -> Desimal                              |\n");
    printf("| 7. Oktal -> Desimal                              |\n");
    printf("| 8. Heksadesimal -> Desimal                       |\n");
    printf("| 9. Keluar                                        |\n");
    printf("|");
       for(int i=1;i<26;i++){
        printf("__");
    }
     printf("|");
    printf("\n");
}

void hukumOhm(){
    char pilihan;
    float V, I, R;
    printf("| * * * * * * * Kalkulator Hukum Ohm * * * * * * * |\n");
    printf("Hukum Ohm: V = I * R\n");
    printf("Hitung Apa? (V/I/R): ");
    scanf(" %c", &pilihan);
    if(pilihan == 'V' || pilihan == 'v'){
        printf("Masukkan I (arus dalam ampere): ");
         if (scanf("%f", &I) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
        printf("Masukkan R (resistansi dalam ohm): ");
         if (scanf("%f", &R) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
        V = I * R;
        printf("Nilai V (tegangan dalam volt): %.2f V\n", V);
    } else if(pilihan == 'I' || pilihan == 'i'){
        printf("Masukkan V (tegangan dalam volt): ");
        if (scanf("%f", &V) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
        printf("Masukkan R (resistansi dalam ohm): ");
        if (scanf("%f", &R) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
        if(R != 0){
            I = V / R;
            printf("Nilai I (arus dalam ampere): %.2f A\n", I);
        } else {
            printf("Resistansi tidak boleh nol.\n");
        }
    } else if(pilihan == 'R' || pilihan == 'r'){
        printf("Masukkan V (tegangan dalam volt): ");
        if (scanf("%f", &V) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
        printf("Masukkan I (arus dalam ampere): ");
       if (scanf("%f", &I) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
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
void dayaListrik(){
   float P,V,I;
   printf("| * * * * * * *Kalkulator Daya Listrik* * * * * * * |\n");
   printf("Mau Hitung Apa? (P/V/I): ");
   char pilihan;
   scanf(" %c",&pilihan);
    if (pilihan=='p' || pilihan=='P'){
     printf("Masukkan V (Tegangan dalam Volt): ");
     if (scanf("%f", &V) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
     printf("Masukkan I (Arus dalam Ampere): ");
     if (scanf("%f", &I) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
     P=V*I;
     printf("Nilai P (Daya dalam Watt): %.2f W\n", P);
   }else if(pilihan=='v'||pilihan=='V'){
     printf("Masukkan P (Daya dalam Watt): ");
     if (scanf("%f", &P) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
     printf("Masukkan I (Arus dalam Ampere): ");
     if (scanf("%f", &I) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
     V=P/I;
     printf("Nilai V (Tegangan dalam Volt): %.2f V\n", V);
   }else if(pilihan=='i'||pilihan=='I'){
     printf("Masukkan P (Daya dalam Watt): ");
    if (scanf("%f", &P) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
     printf("Masukkan V (Tegangan dalam Volt): ");
     if (scanf("%f", &V) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
     I=P/V;
     printf("Nilai I (Arus dalam Ampere): %.2f A\n", I);
   } else {
        printf("Pilihan tidak valid. Silakan pilih P, V, atau I.\n");
   }
}
void resisSeri(){
    int n, i;
    float R, total = 0; 
    printf("| * * * * * * Kalkulator Resistor Seri * * * * * * |\n");
    printf("Masukkan jumlah resistor: ");
    if (scanf("%d", &n) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
    else if(n<=0){
        printf("Jumlah resistor harus lebih dari 0!\n");
        return;
    }else{
    for(i = 0; i < n; i++){
        printf("Masukkan nilai resistor ke-%d: ", i + 1);
        if (scanf("%f", &R) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
        total += R;
    }
    printf("Total resistansi seri: %.2f Ohm\n", total);
}
}
void resisParalel(){
    int n, i;
    float R, total = 0;
    printf("| * * * * * * Kalkulator Resistor Paralel * * * * * |\n");
    printf("Masukkan jumlah resistor: ");
    if (scanf("%d", &n) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
    else if(n<=0){
        printf("Jumlah resistor harus lebih dari 0!\n");
        return;
    }else{
    for(i = 0; i < n; i++){
        printf("Masukkan nilai resistor ke-%d: ", i + 1);
        if (scanf("%f", &R) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
        total += 1 / R;
    }
    if(total != 0){
        printf("Total resistansi paralel: %.2f Ohm\n", 1 / total);
    } else {
        printf("Total resistansi paralel tidak terdefinisi.\n");
    }
}
}
void biner(long long desimal){
            int biner[64];
            int index=0;
            for(index=0;desimal>0;index++){
                biner[index]=desimal%2;
                desimal=desimal/2;
            }
            printf("Bilangan Biner: ");
            for (long long j=index-1;j>=0;j--){
                printf("%d",biner[j]);
            }
            printf("\n");
        }
void oktal(long long desimal){
            int oktal[32];
            int index=0;
            for(index=0;desimal>0;index++){
                oktal[index]=desimal%8;
                desimal=desimal/8;
            }
            printf("Bilangan Oktal: ");
            for (int j=index-1;j>=0;j--){
                printf("%d",oktal[j]);
            }
            printf("\n");
        }
void heksa(long long desimal){
            char heksa[32];
            char hexMap[] ={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
            int index=0;
            for(index=0;desimal>0;index++){
                heksa[index]=hexMap[desimal%16];
                desimal=desimal/16;
            }
            printf("Bilangan Heksadesimal: ");
            for (long long j=index-1;j>=0;j--){
                printf("%c",heksa[j]);
            }
            printf("\n");
        }
void konversiDesi(){
    printf("| * * * * * * Konversi Bilangan Desimal * * * * * * |\n");
    printf("Masukkan Bilangan Desimal: ");
    long long des;
    if (scanf("%lld", &des) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
    if(des==0){
        printf("Bilangan Biner: 0\n");
        printf("Bilangan Oktal: 0\n");
        printf("Bilangan Heksadesimal: 0\n");
    }else if(des < 0){
        printf("Masukkan bilangan desimal non-negatif!\n");
    }else{
        biner(des);
        oktal(des);
        heksa(des);
    }       
}

void binerDesimal(char biner[]){
    long long desimal = 0;
    long long i = 0; 
    printf("Masukkan bilangan biner: ");
    scanf("%99s", biner);
    while (biner[i] != '\0') {
        if (biner[i] != '0' && biner[i] != '1') {
            printf("Input tidak valid! Hanya boleh 0 atau 1.\n");
            return;
        }
        desimal = desimal * 2 + (biner[i] - '0');
        i++;
    }
    printf("Hasil konversi desimal: %lld\n", desimal);
}
void oktaldesi() {
    int oktal, sisa, pangkat = 1, desimal = 0;
    printf("| * * * * Konversi Bilangan Oktal ke Desimal * * * * |\n");
    printf("Masukkan bilangan oktal: ");
    if (scanf("%d", &oktal) != 1) {
         printf("Masukkan angka yang valid!\n");
         while (getchar() != '\n');
         return;
        }
    else if(oktal < 0){
        printf("Masukkan bilangan oktal non-negatif!\n");
        return;
    }
    else if(oktal==0){
        printf("Bilangan Desimal: 0\n");
    }
    else{
    while (oktal != 0) {
        sisa = oktal % 10;
        desimal += sisa * pangkat;
        pangkat *= 8;
        oktal /= 10;
    }
    printf("Bilangan Desimal: %d\n", desimal);  
    }
}
void heksaDesimal(){
    char heksa[100];
    long long desimal = 0;
    int i = 0, nilai, pangkat = 1;
    printf("| * * * * Konversi Bilangan Heksadesimal ke Desimal * * * * |\n");
    printf("Masukkan bilangan heksadesimal: ");
    scanf("%99s", heksa);
    while (heksa[i] != '\0') {
        if (heksa[i] >= '0' && heksa[i] <= '9') {
            nilai = heksa[i] - '0';
        } else if (heksa[i] >= 'A' && heksa[i] <= 'F') {
            nilai = heksa[i] - 'A' + 10;
        } else if (heksa[i] >= 'a' && heksa[i] <= 'f') {
            nilai = heksa[i] - 'a' + 10;
        } else {
            printf("Input tidak valid! Hanya boleh 0-9, A-F.\n");
            return;
        }
        desimal = desimal * 16 + nilai;
        i++;
    }
    printf("Hasil konversi desimal: %lld\n", desimal);
}
int pilihan(){
    int j;
    printf("Masukkan Pilihan Anda (1-9):");
    scanf("%d", &j);
    getchar();
    int ulang;
    switch(j){
    case 1:
        do {
            hukumOhm();
            printf("Ingin menggunakan fitur Hukum Ohm lagi? (1 = Ya): ");
            scanf("%d", &ulang);
            printf("\n");
        } while(ulang == 1);
        break;
    case 2:
        do {
            dayaListrik();
            printf("Ingin menggunakan fitur Daya Listrik lagi? (1 = Ya): ");
            scanf("%d", &ulang);
            printf("\n");
        } while(ulang == 1);
        break;
    case 3:
        do {
            resisSeri();
            printf("Ingin menggunakan fitur Resistor Seri lagi? (1 = Ya): ");
            scanf("%d", &ulang);
            printf("\n");
        } while(ulang == 1);
        break;
    case 4:
        do {
            resisParalel();
            printf("Ingin menggunakan fitur Resistor Paralel lagi? (1 = Ya): ");
            scanf("%d", &ulang);
            printf("\n");
        } while(ulang == 1);
        break;
    case 5:
        do {
            konversiDesi();
            printf("Ingin menggunakan fitur Konversi Desimal lagi? (1 = Ya): ");
            scanf("%d", &ulang);
            printf("\n");
        } while(ulang == 1);
        break;
    case 6:
        do {
            printf("| * * * * Konversi Bilangan Biner ke Desimal * * * * |\n");
            char biner[100];
            binerDesimal(biner);
            printf("Ingin menggunakan fitur Konversi Biner lagi? (1 = Ya): ");
            scanf("%d", &ulang);
            printf("\n");
        } while(ulang == 1);
        break;
    case 7:
        do {
            oktaldesi();
            printf("Ingin menggunakan fitur Konversi Oktal lagi? (1 = Ya): ");
            scanf("%d", &ulang);
            printf("\n");
        } while(ulang == 1);
        break;
    case 8:
        do {
            heksaDesimal();
            printf("Ingin menggunakan fitur Konversi Heksadesimal lagi? (1 = Ya): ");
            scanf("%d", &ulang);
            printf("\n");
        } while(ulang == 1);
        break;
    case 9:
            printf("Terima kasih telah menggunakan toolkit ini!\n");
            return 0;
    default:
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
            break;
    }
    return 1; 
}
int main(){
    menu();
    while(pilihan());
    return 0;
}