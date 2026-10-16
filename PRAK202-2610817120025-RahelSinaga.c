#include <stdio.h>

int main() {
    float val1, val2;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &val1);
    printf("Masukkan Nilai Kedua   : ");
    scanf("%f", &val2);

    float hasil = val1 + val2;

    if (val1 == (int)val1) {
        if (val2 == (int)val2) {
            printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%.0f\" adalah \"%.2f\"\n", val1, val2, hasil);
        } else {
            printf("Hasil dari penjumlahan nilai pertama \"%.0f\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", val1, val2, hasil);
        }
    } else {
        printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", val1, val2, hasil);
    }

    return 0;
}