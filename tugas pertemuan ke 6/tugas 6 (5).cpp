#include <stdio.h>

int main() {
    int bulan = 10; // jumlah bulan
    double saldo = 1000000; // saldo awal
    double bunga = 0.02; // bunga per bulan
    double total;

    for (int i = 1; i <= bulan; i++) {
        saldo += saldo * bunga;
    }

    total = saldo;

    printf("Jumlah uang setelah %d bulan adalah Rp. %.2lf\n", bulan, total);

    return 0;
}



