#include <stdio.h>
void resisSeri(){
    int n, i;
    float R, total = 0;
    printf("| * * * * * * Kalkulator Resistor Seri * * * * * * |\n");
    printf("Masukkan jumlah resistor: ");
    scanf("%d", &n);
    if(n<=0){
        printf("Jumlah resistor harus lebih dari 0!\n");
        return;
    }else{
    for(i = 0; i < n; i++){
        printf("Masukkan nilai resistor ke-%d: ", i + 1);
        scanf("%f", &R);
        total += R;
    }
    printf("Total resistansi seri: %.2f Ohm\n", total);
}
}
int main(){
    resisSeri();
    return 0;
}