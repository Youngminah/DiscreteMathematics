#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS  35000



int main(int argc, char* argv[])
{
	int i, len, index, isUnique;

	// List of distinct words
	char words[MAX_WORDS][25];
	char word[25];

	// Count of distinct words
	unsigned int count[MAX_WORDS];





	/* Try to open file */
	FILE *input = fopen(argv[1], "r");
	FILE *output= fopen(argv[2], "w");
	const char delimiters[] = " \n\t\r!@#$%^&*()_-+'?><{}[]=~;\|.,:`\"/";


	// Initialize words count to 0
	for (i = 0; i<MAX_WORDS; i++)
		count[i] = 0;

	index = 0;
	int total = 0;

	while (fscanf(input, "%s", word) != EOF) {
		char *tok = strtok(word, delimiters);
		while (tok != NULL)
		{
			// Convert word to lowercase
			strlwr(tok);
			// Check if word exits in list of all distinct words
			isUnique = 1;
			for (i = 0; i < index && isUnique; i++)
			{
				if (strcmp(words[i], tok) == 0)
					isUnique = 0;
			}

			// If word is unique then add it to distinct words list
			// and increment index. Otherwise increment occurrence 
			// count of current word.
			if (isUnique)
			{
				strcpy(words[index], tok);
				count[index]++;

				index++;
			}
			else
			{
				count[i - 1]++;
			}
			total += 1;
			tok = strtok(NULL, delimiters);
		}
	}
	// Close file
	fclose(input);
	


	/*
	* Print occurrences of all words in file.
	*/
	for (i = 0; i<index; i++)
	{
		fprintf(output,"[%05d] %s (%d)\n",i, words[i], count[i]);

	}
	fprintf(output, "[TOTAL] %010d\n", total);
	fputs(" ---------------------------------------- \n", output);
	fputs("           ^                  ^           \n", output);
	fputs("           `                  `           \n", output);
	fputs("         @             v        @         \n", output);
	fputs("                                          \n", output);
	fputs("         Creat by YoungMin Kim :)         \n", output);
	fputs("    <     Student ID: 20166450        >   \n", output);
	fputs("       Contact: kimym7418@gmail.com       \n", output);
	fputs("                                          \n", output);
	fputs(" ---------------------------------------- \n", output);
	fclose(output);
	return 0;
}