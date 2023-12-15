#include <stdio.h>

int main() {
	char A[8] = {'J', 'A', 'K', 'A', 'R', 'T', 'A'};
	
	int i, j;
	int found = 0;
	
	for (i = 0; i < 7 - 1; i++) {
		for(j = i + 1; j < 7; j++) {
			if (A[i] == A[j]) {
				found = 1;
				printf("ADA\nHuruf yang sama: %c\n", A[i]);
				break;
			}
		}
		if (found) {
			break ;
		}
	}
	if (!found) {
		printf("TIDAK ADA\n");
	}
	
	return 0;
	
}
