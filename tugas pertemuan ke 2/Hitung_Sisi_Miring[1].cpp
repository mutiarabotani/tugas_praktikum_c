#include <stdio.h>
#include <cmath>

/*
Nama : Mutiara Botani
*/

int main(){
	
    double alas = 4; // Panjang alas segitiga dalam cm
    double tinggi = 5; // Tinggi segitiga dalam cm

    // Menghitung panjang sisi miring menggunakan Teorema Pythagoras
    double sisiMiring = sqrt(alas * alas + tinggi * tinggi);
	
    printf("Panjang sisi miring segitiga dengan alas 4 cm dan tinggi 5 cm adalah : %.2f cm\n", sisiMiring);
    
	return 0;
}
