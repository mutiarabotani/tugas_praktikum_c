#include <stdio.h>

int main() {
    int A[11]; // Membuat array dengan 11 elemen
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35, 28, 14, 11, 999};
    int i, j = 0;

    // a. Menyimpan nilai lebih besar dari 9 ke dalam array A
    printf("a. A ");
    for (i = 0; data[i] != 999 && j < 11; i++) {
        if (data[i] > 9) {
            A[j] = data[i];
            printf("%d ", A[j]);
            j++;
        }
    }
    printf("\n");

    // b. Menyimpan nilai lebih besar dari 9 ke dalam array A
    j = 0; // Mengulang inisialisasi j
    printf("b. A ");
    for (i = 0; data[i] != 999 && j < 11; i++) {
        if (data[i] > 9) {
            A[j] = data[i];
            printf("%d ", A[j]);
            j++;
        }
    }
    printf("\n");

    // c. Menyimpan nilai lebih besar dari 9 ke dalam array A secara berderet
    j = 0; // Mengulang inisialisasi j
    i = 0; // Mengulang inisialisasi i
    printf("c. A ");
    while (data[i] != 999 && j < 11) {
        if (data[i] > 9) {
            A[j] = data[i];
            printf("%d ", A[j]);
            j++;
        }
        i++;
    }
    printf("\n");

    // d. Menyimpan nilai ganjil ke dalam array A (999 tidak disimpan)
    j = 0; // Mengulang inisialisasi j
    printf("d. A ");
    for (i = 0; data[i] != 999 && j < 11; i++) {
        if (data[i] % 2 != 0) {
            A[j] = data[i];
            printf("%d ", A[j]);
            j++;
        }
    }
    printf("\n");

    // e. Menyimpan nilai ganjil ke dalam array A (999 ikut disimpan)
    j = 0; // Mengulang inisialisasi j
    i = 0; // Mengulang inisialisasi i
    printf("e. A ");
    while (data[i] != 999 && j < 11) {
        if (data[i] % 2 != 0) {
            A[j] = data[i];
            printf("%d ", A[j]);
            j++;
        }
        i++;
    }
    printf("\n");

    return 0;
}

    

