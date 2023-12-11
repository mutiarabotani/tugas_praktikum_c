#include <stdio.h>

int main(){
    int N;
    
    printf("Masukan bilangan N: ");
    scanf("%d", &N);
    
    START:
          if (N > 50) {
        printf("N > 50\n");
        if (N > 140) {
            N = N - 25;
        } else {
            N = N + 10;
        }
    } else {
        printf("N <= 50\n");
        scanf("%d", &N);
        goto START;
    }

    printf("Nilai N adalah: %d\n", N);

    return 0;
}
