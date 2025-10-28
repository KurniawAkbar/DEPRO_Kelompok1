#include <stdio.h>
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
int main(){
    resisParalel();
    return 0;
}