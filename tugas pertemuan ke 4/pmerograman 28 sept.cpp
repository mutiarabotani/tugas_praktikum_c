#include <stdio.h>

int main(){
     int bilangan;

    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &bilangan);

    if (bilangan >= 0) {
        if (bilangan % 2 == 0) {
            printf("%d adalah bilangan genap.\n", bilangan);
        } else {
            printf("%d adalah bilangan ganjil.\n", bilangan);
        }
    } else {
        printf("Anda memasukkan bilangan negatif. Mohon masukkan bilangan bulat positif.\n");
    }

    return 0;
}
