#include <stdio.h>

/*
Nama : Mutiara Botani
*/

int main() {
    double diameter = 15; // Diameter bola dalam cm
    double radius = diameter / 2; // Menghitung jari-jari bola
    double pi = 3.14; // Nilai p

    // Menghitung volume bola menggunakan rumus V = (4/3) * p * r^3
    double volume = (4.0 / 3.0) * pi * radius * radius * radius;

	printf("Luas Bangun ruang berbentuk bola dengan diameter 15 cm adalah ");
	printf ("%.2f", volume);
	printf (" cm^3");

	return 0;
}
