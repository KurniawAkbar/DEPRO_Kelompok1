#include <stdio.h>
void biner(int desimal){
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
void oktal(int desimal){
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
void heksa(int desimal){
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
void konversiDesi(){
    printf("| * * * * * * Konversi Bilangan Desimal * * * * * * |\n");
    printf("Masukkan Bilangan Desimal: ");
    int des;
    scanf(" %d",&des);
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
int main(){
    konversiDesi();
    return 0;
}