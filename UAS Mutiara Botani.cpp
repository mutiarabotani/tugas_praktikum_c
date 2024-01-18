#include <stdio.h>
#include <unistd.h>

//Array level kekeruhan air
int levels[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

//fungsi untuk mengaktifkan motor pembuka klep pengisian air
void activateWaterInlet() {
	printf("Motor Pembuka Klep pengisian air aktif selama 2 menit sampai air penuh.\n");
	sleep(2 * 60); // 2 menit
	
}

//fungsi untuk mendeteksi level kekeruhan air
int detectTurbidity() {
	printf(" Sensor turbidimeter aktif untuk mendeteksi level kekeruhan air.\n");
	// logika untuk mendeteksi level kekeruhan air
	// Misalnya, return levels[index} setelah mendeteksi
	return levels[4]; // contoh: menggunakan level kekeruhan air pada indeks 4
}
		
		
//fungsi untuk mengaktifkan motor listrik utama
void activateMainMotor(int speed) {
	printf("Motor listrik utama berputar dengan kecepatan %d rpm.\n", speed);
	
}

//fungsi untuk mengaktifkan motor pembuka klep pembuangan air kotor
void activateDrainMotor() {
	printf("Motor pembuka klep pembuangan air kotor aktif selama 2 menit sampai air kotor habis.\n");
	sleep(2 * 60); // 2 menit
} 

//fungsi utama untuk mengeringkan cucian dengan motor listrik utama
void dryClothes() {
	printf("Motor listrik utama berputar  dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit.\n");
	sleep(3 * 60);	
}
int main() {
	printf("1. Tombol Start ditekan.\n");
	
	//langkah 1: Mengaktifkan motor pembuka klep pengisian air
	activateWaterInlet();
		
	//langkah 2: Mendeteksi level kekeruhan air
	int turbiditylevel = detectTurbidity();
	
	//langkah 3: Mengaktifkan motor listrik utama
	activateMainMotor(turbiditylevel);
	
	//langkah 4: Motor listrik utama berhenti pada setiap pertengahan waktu
	// (implementasikan logika berdasarkan kebutuhan)
	
	//langkah 5: Mengaktifkan motor pembuka klep pembuangan air kotor
	activateDrainMotor();
	
	//langkah 6: Mengeringkan cucian dengan motor listrik utama
	dryClothes();
	
	//Mengaktifkan motor pembuka klep pengisian air
	activateWaterInlet();
	
	//langkah 8: Motor listrik utama berputar selama sisa waktu mencuci 
	// (implementasikan logika berdasarkan kebutuhan)
	
	//langkah  9: Mengaktifkan motor pembuka klep pembuangan air kotor
	activateDrainMotor();
	
	//langkah 10: Mengeringkan cucian dengan motor listrik utama
	dryClothes();
	
	return 0;
}
