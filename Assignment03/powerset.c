#include <stdio.h>

void subset(int k, int n,char* arr,char*bit) {

	if (k == n) {
		static int count = 1;
		printf("[%04d] ", count);
		if (count == 1) 
			printf("Φ");

		count++;

		for (int i = 0; i < n; i++) {
			int sum = 0;
			if (bit[i] == 1) {
				printf("%c", arr[i]);

				if (i < n-1) {
					for (int j = i + 1; j < n; j++) {
						if (bit[j] == 1)
							sum += 1;
					}
					if (sum > 0)
						printf(", ");
				}

			}
		}
		puts("");
	}

	else {
		bit[k] = 0;
		subset(k + 1, n,arr,bit);
		bit[k] = 1;
		subset(k + 1, n,arr,bit);
	}
}

int main(int argc, char *argv[11]) {
	int len = argc;
	char arr[10] = { 0, };
	for (int i = 1; i < len ; i++)
		arr[i - 1] = *argv[i];
	int bit[10];
	subset(0, argc-1,arr,bit);

	return 0;
}

