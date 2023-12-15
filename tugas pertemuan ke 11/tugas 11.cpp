#include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int sum = 0, countB = 0, countC = 0;

    // Menghitung rata-rata nilai
    for (int i = 0; i < 12; i++) {
        sum += A[i];
    }
    float average = (float)sum / 12;

    // Memindahkan nilai ke array B atau C
    for (int i = 0; i < 12; i++) {
        if (A[i] > average) {
            B[countB++] = A[i];
        } else {
            C[countC++] = A[i];
        }
    }

    // Menampilkan nilai rata-rata
    printf("Nilai rata-rata: %.2f\n", average);

    // Menampilkan isi array A
    printf("Isi array A: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Menampilkan isi array B
    printf("Isi array B: ");
    for (int i = 0; i < countB; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    // Menampilkan isi array C
    printf("Isi array C: ");
    for (int i = 0; i < countC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");
    
    return 0;
}
