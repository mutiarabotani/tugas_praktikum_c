#include <stdio.h>

int main() {
    // Array satu dimensi A dengan 11 elemen bertipe char
    char A[11] = {'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};

    // Inisialisasi variabel untuk menyimpan informasi huruf terbanyak
    char hurufTerbanyak;
    int jumlahTerbanyak = 0;

    // Inisialisasi array frekuensi huruf
    int frekuensi[26] = {0}; // Ukuran array disesuaikan dengan jumlah huruf dalam alfabet

    // Menghitung frekuensi setiap huruf dalam array A
    for (int i = 0; A[i] != '\0'; i++) {
        char huruf = A[i];
        frekuensi[huruf - 'A']++;
    }

    // Mencari huruf dengan frekuensi terbanyak
    for (int i = 0; i < 26; i++) {
        if (frekuensi[i] > jumlahTerbanyak) {
            jumlahTerbanyak = frekuensi[i];
            hurufTerbanyak = 'A' + i;
        }
    }

    // Menampilkan hasil
    printf("Isi array A: %s\n", A);
    printf("Huruf terbanyak: %c\n", hurufTerbanyak);
    printf("Jumlah huruf terbanyak: %d\n", jumlahTerbanyak);

    return 0;
}

