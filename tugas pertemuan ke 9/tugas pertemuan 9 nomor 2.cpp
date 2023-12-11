#include <stdio.h>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char inputChar;

    printf("Masukkan sebuah karakter: ");
    scanf(" %c", &inputChar);

    int count = 0;
    for (int i = 0; i < 10; ++i) {
        if (A[i] == inputChar) {
            count++;
        }
    }

    if (count > 0) {
        printf("ADA\n");
        printf("Jumlah karakter '%c' di dalam array: %d\n", inputChar, count);
    } else {
        printf("TIDAK ADA\n");
    }
    
    return 0;
}
