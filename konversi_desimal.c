#include <stdio.h>
void konversiDesi(){
    int i;
    printf("| * * * * * * Konversi Bilangan Desimal * * * * * * |\n");
    printf("Konversi Desimal ke: 1. Biner 2. Oktal 3. Heksadesimal\n");
    printf("Masukkan Pilihan Anda (1-3): ");
    scanf(" %d",&i);
    if(i==1){
        int desimal;
        printf("Konversi Bilangan Desimal ke Biner\n");
        printf("Masukkan Bilangan Desimal: ");
        scanf(" %d",&desimal);
        if (desimal==0){
            printf("Bilangan Biner: 0\n");
        }else if (desimal < 0){
            printf("Masukkan bilangan desimal non-negatif.\n");
            }
        else{
            int biner[32];
            int index=0;
            for(index=0;desimal>0;index++){
                biner[index]=desimal%2;
                desimal=desimal/2;
            }
            printf("Bilangan Biner: ");
            for (int j=index-1;j>=0;j--){
                printf("%d",biner[j]);
            }
            printf("\n");
        }
    }else if(i==2){
        int desimal;
        printf("Konversi Bilangan Desimal ke Oktal\n");
        printf("Masukkan Bilangan Desimal: ");
        scanf(" %d",&desimal);
        if (desimal==0){
            printf("Bilangan Oktal: 0\n");
        }else if (desimal < 0){
            printf("Masukkan bilangan desimal non-negatif.\n");
            }
        else{
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

    }else{ 
         int desimal;
        printf("Konversi Bilangan Desimal ke Heksadesimal\n");
        printf("Masukkan Bilangan Desimal: ");
        scanf(" %d",&desimal);
        if (desimal==0){
            printf("Bilangan Heksadesimal: 0\n");
        }else if (desimal < 0){
            printf("Masukkan bilangan desimal non-negatif.\n");
            }
        else{
            char heksa[32];
            char hexMap[] ={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
            int index=0;
            for(index=0;desimal>0;index++){
                heksa[index]=hexMap[desimal%16];
                desimal=desimal/16;
            }
            printf("Bilangan Heksadesimal: ");
            for (int j=index-1;j>=0;j--){
                printf("%c",heksa[j]);
            }
            printf("\n");
        }
    }
}
void binerDesimal(){
    printf("| * * * * Konversi Bilangan Biner ke Desimal * * * * |\n");
    int desimal = 0;
    char biner[100];
    int i = 0;
    printf("Masukkan bilangan biner: ");
    scanf("%s", &biner);

    while (biner[i] != '\0') {
        if (biner[i] != '0' && biner[i] != '1') {
            printf("Input tidak valid! Hanya boleh 0 atau 1.\n");
            return;
        }

        desimal = desimal * 2 + (biner[i] - '0');
        i++;
    }

    printf("Bilangan Desimal: %d\n", desimal);
}
int main(){
    konversiDesi();
    return 0;
}