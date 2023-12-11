#include <stdio.h>

int main() {
	int kekeruhan[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};
	int kecepatan[] = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
	int waktu[] = {60, 60, 60, 60, 60, 60, 60, 60, 60};
	
	
	int level, i;
	printf("Masukan level kekeruhan air: ");
	scanf("%d", &level);
	
	for(i = 0; i < 9; i++) {
		if (level == kekeruhan [i]) {
			printf("Mencuci dengan kecepatan %d  rpm selama %d menit\n",  kecepatan[i]), waktu[i];
			break;
			
		}
	}
	
	if (i == 9) {
		printf("level kekeruhan air tidak valid\n");
	}
	
	return 0;
	
}

