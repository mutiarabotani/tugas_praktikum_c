#include <stdio.h>

int main() {
    int kode;
    char jenis;
    double harga, diskon, harga_setelah_diskon;

    // Menerima masukan kode, jenis, dan harga
    printf("Kode: ");
    scanf("%d", &kode);
    printf("Jenis (A/B/C): ");
    scanf(" %c", &jenis);
    printf("Harga: ");
    scanf("%lf", &harga);

    // Menghitung diskon berdasarkan jenis barang
    switch (jenis) {
        case 'A':
            diskon = 0.10;
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.20;
            break;
        default:
            diskon = 0.0;  // Tidak ada diskon jika jenis tidak valid
    }

    // Menghitung harga setelah didiskon
    harga_setelah_diskon = harga - (harga * diskon);

    // Menampilkan hasil
    printf("Jenis barang %c mendapat diskon %.0lf%%, Harga setelah didiskon = %.2lf\n", jenis, diskon * 100, harga_setelah_diskon);

    return 0;
}
