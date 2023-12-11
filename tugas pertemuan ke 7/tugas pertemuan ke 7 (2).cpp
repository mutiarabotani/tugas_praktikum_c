#include <stdio.h>

int main() {
    int A[11]; // Membuat array dengan 11 elemen
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int i, j = 0;

    // Menginput data dan menyimpan nilai genap ke dalam array A
    printf("Data dalam dokumen:\n");
    for (i = 0; i < 11; i++) {
        printf("%d ", data[i]); // Mencetak data satu per satu
        if (data[i] % 2 == 0) {
            A[j] = data[i];
            j++;
        }
    }

    // Mencetak isi array A
    printf("\nIsi array A: ");
    for (i = 0; i < j; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}


