#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void subset(int k, int n, char* arr, int*bit, FILE *fp1);

int main(int argc, char* argv[]) {
	
	int len = argc;
	int bit[10];
	FILE *fp1;
	char str[64] = { 0, };
	char *name=argv[1];


	fp1 = fopen(name, "w");
	for (int i = 2; i < len; i++)
		str[i - 2] = *argv[i];

	subset(0, argc - 2, str, bit,fp1);

	fputs(" ---------------------------------------- \n", fp1);
	fputs("           ^                  ^           \n", fp1);
	fputs("           ¢¥                  `           \n", fp1);
	fputs("         @             ¢£        @         \n", fp1);
	fputs("                                          \n", fp1);
	fputs("         Creat by YoungMin Kim :)         \n", fp1);
	fputs("    <     Student ID: 20166450        >   \n", fp1);
	fputs("       Contact: kimym7418@gmail.com       \n", fp1);
	fputs("                                          \n", fp1);
	fputs(" ---------------------------------------- \n", fp1);


	fclose(fp1);
	return 0;
}


void subset(int k, int n, char* arr, int*bit,FILE *fp1) {

	if (k == n) {
		static int count = 1;
		fprintf(fp1,"[%04d] ", count);
		if (count == 1)
			fputs("¥Õ",fp1);

		count++;

		for (int i = 0; i < n; i++) {
			int sum = 0;
			if (bit[i] == 1) {
				fprintf(fp1,"%c", arr[i]);

				if (i < n - 1) {
					for (int j = i + 1; j < n; j++) {
						if (bit[j] == 1)
							sum += 1;
					}
					if (sum > 0)
						fputs(", ",fp1);
				}

			}
		}
		fputs( "\n",fp1);
	}

	else {
		bit[k] = 0;
		subset(k + 1, n, arr, bit,fp1);
		bit[k] = 1;
		subset(k + 1, n, arr, bit,fp1);
	}
}