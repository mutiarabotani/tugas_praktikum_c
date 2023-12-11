#include <stdio.h>

int main(){
    int N;
    
    printf("Masukan bilangan N: ");
    scanf("%d", &N);
    
    if (N > 50) {
          printf("N = N - 25\n");
    
    if (N > 100) {
            N = N - 25;
            printf("N = N - 25\n");
        } else {
            N = N + 10;
            printf("N = N + 10\n");
        }
    } else {
        printf("N <= 50\n");
        scanf("%d", &N);
        printf("START\n");
    }

    printf("Nilai N adalah: %d\n", N);

    return 0;
}
