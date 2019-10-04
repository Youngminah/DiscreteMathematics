#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[101]) {
	int len = argc; //lengh of Array
	int result = 0;  // Circulate using operator.

	for (int i = 1; i < len; i += 2) {
		int operator=*argv[i];
		//Ascii code '+' => 43
		if (operator==43)
			result = result + atoi(argv[i + 1]);
		//Ascii code '-' => 45
		else if (operator==45)
			result = result - atoi(argv[i + 1]);
	}

	printf("%d\n", result);
	printf("-----------------<MIN>------------------\n");
	printf("                                        \n");
	printf("          Name: YoungMin Kim            \n");
	printf("         Student ID: 20166450           \n");
	printf("      Email: kimym7418@gamil.com        \n");
	printf("                                        \n");
	printf("----------------------------------------\n");
}