#include <stdio.h>
void hitungTotal(int jumlah) {
    float resistor, total = 0;

    for (int i = 1; i <= jumlah; i++) {
        printf("Masukkan nilai resistor ke-%d (Ohm): ", i);
        scanf("%f", &resistor);
        total = total + resistor;
    }

    printf("Total hambatan = %.2f Ohm\n", total);
}
int main() {
    int jumlahResistor;

    printf("Masukkan jumlah resistor yang akan dihitung: ");
    scanf("%d", &jumlahResistor);

    hitungTotal(jumlahResistor);

    return 0;
}
