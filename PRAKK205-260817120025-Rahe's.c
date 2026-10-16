#include <stdio.h>
#include <math.h>

int main() {
    int A, B, alas, tinggi, sisi_miring, keliling, luas;

    scanf("%d %d", &A, &B);

    tinggi = A;
    sisi_miring = B;
    
    // Menghitung alas menggunakan rumus Pythagoras: sqrt(B^2 - A^2)
    alas = round(sqrt((sisi_miring * sisi_miring) - (tinggi * tinggi)));
    keliling = alas + tinggi + sisi_miring;
    luas = 0.5 * alas * tinggi;

    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2\n", luas);

    return 0;
}