
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>


#define swap(a,b,temp) temp=a; a=b; b=temp;


int cnt = 0;

void permutations(char *a, const int k, const int m,FILE *fp2) // 순열 재귀함수 구현
													
{
	int i;
	char temp;



	if (k == m) //순열을 출력
	{
		fprintf(fp2, "[%03d] ", cnt + 1);
		for (i = 0; i <= m; i++)
		{
			fprintf(fp2, "%c ", a[i]);
		}
		fprintf(fp2,"\n");
		cnt++; // 몇번째 경우의 수인지
	}

	else // a[k] a[m]에 있는 여러 순열을 순환적으로 생성
	{
		for (i = k; i <= m; i++)
		{
			swap(a[k], a[i], temp); // a[k]와 a[i]를 교환
			permutations(a, k + 1, m,fp2); // a[k+1],...a[m]에 대한 모든 순열
									   // 원래 상태로 되돌리기 위해 a[k]와 a[i]를 다시 교환
			swap(a[k], a[i], temp);
		}

	}
}



int main(int argc, char* argv[]) {

	FILE *fp1, *fp2;
	char str[64];   // change the number appropriately to your program

	if ((fp1 = fopen(argv[1], "r")) == NULL) { //fail to open file for read
		printf("fail to open file.");
		return 0;
	}
	if ((fp2 = fopen(argv[2], "wt")) == NULL) { //fail to open file for write
		printf("fail to create file for write.");
		return 0;
	}

	fgets(str, sizeof(str), fp1);

	char *ptr = strtok(str, " \t\n");
	int  nNumber;

	while (ptr != NULL)
	{
		nNumber = atoi(ptr);
		ptr = strtok(NULL, " ");
	}

	char* pNumbers = (char*)calloc(nNumber, sizeof(char));

	for (int i = 0; i<nNumber; i++) {   // read a file and write to another file line by line
		fgets(str, sizeof(str), fp1);
		ptr = strtok(str, " \t\n");

		while (ptr != NULL)
		{
			pNumbers[i] = ptr[0];
			ptr = strtok(NULL, " ");
		}

		}



	permutations(pNumbers, 0, nNumber - 1,fp2);
	

	fputs(" ---------------------------------------- \n", fp2);
	fputs("           ^                  ^           \n", fp2);
	fputs("           `                  `           \n", fp2);
	fputs("         @             v        @         \n", fp2);
	fputs("                                          \n", fp2);
	fputs("         Creat by YoungMin Kim :)         \n", fp2);
	fputs("    <     Student ID: 20166450        >   \n", fp2);
	fputs("       Contact: kimym7418@gmail.com       \n", fp2);
	fputs("                                          \n", fp2);
	fputs(" ---------------------------------------- \n", fp2);



	free(pNumbers);

	fclose(fp1);
	fclose(fp2);
	return 0;
}