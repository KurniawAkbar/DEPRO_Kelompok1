#include <stdio.h>
void oktaldesi() {
    int oktal, sisa, pangkat = 1, desimal = 0;
    printf("| * * * * Konversi Bilangan Oktal ke Desimal * * * * |\n");
    printf("Masukkan bilangan oktal: ");
    scanf("%d", &oktal);
    if(oktal < 0){
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
int main(){
    oktaldesi();
    return 0;
}