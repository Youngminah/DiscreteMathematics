#include <stdio.h>
#include <stdlib.h> 

int sumNumbers(int* pNumbers, int nIndex, int i)
{
	// basis step
	if (nIndex <= i)
	{
		return 0;
	}
	// recursive step
	else
	{
		return pNumbers[nIndex - 1]+sumNumbers(pNumbers, nIndex-1,i);

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
		printf("%s\n", ptr);
		nNumber = atoi(ptr);
		ptr = strtok(NULL, " ");
	}

	int* pNumbers = (int*)calloc(nNumber, sizeof(int));

	for(int i=0;i<nNumber;i++){   // read a file and write to another file line by line
		fgets(str, sizeof(str), fp1);
		ptr = strtok(str, " \t\n");

		while (ptr != NULL)
		{
			pNumbers[i] = atoi(ptr);
			ptr = strtok(NULL, " ");
		}

	}


	int     nSum;
	for (int i = nNumber-1; i >= 0; i--) {
		nSum = sumNumbers(pNumbers, nNumber, i);
		fprintf(fp2, "[%04d] ", i+1);
		fprintf(fp2, "%d \n", nSum);
	}

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
