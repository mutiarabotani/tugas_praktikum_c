#include <stdio.h>

int main() {
    int i;
    int N = 1;

    for (i = 0; i <= 10; i++) {
        printf("%4i ", N);
        N *= 2;
    }

    return 0;
}


