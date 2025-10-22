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
int main_menu(){
    int pilihan;
    menu();
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &pilihan);
    return pilihan;
}