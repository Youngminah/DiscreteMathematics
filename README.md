# Assignment 04

> Write a code in C programming for obtaining the powerset of a given set and save them to a text file

## Parameters

- Filename to save the output result
- A series of a character for a set (The maximum number of elements is 10)

## Return Values

- Format : [####] character, character, character, ...
- The serial number that counts the number of subsets in the 4-digits format
- A list of characters that represent a subset of a given set

## Examples

```console
$ program.exe 20191234_04.txt a b c d e f g h i j
```

## Print out

- The output of all the subsets of a given set
- Personal signature that can identify the writer in a unique way
- The output of the computation is followed by the personal signature
- Print out the symbol $`\varnothing`$ (ASCII code: 155) for the empty set

```console
$ program.exe filename_save.txt a b
[0001] 'symbol for the empty set'
[0002] a
[0003] b
[0004] a, b
*********************
Byung-Woo Hong
Student ID : 12345678
*********************
```

## Sample Code for reading from and writing to files

```c
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(int argc, char* argv[]){

    FILE *fp1,*fp2;
    char str[64];   // change the number appropriately to your program
    // read_file = argv[1]
    // write_file = argv[2]

    // see the usage of r, rt, w, wt, r+, w+
    if((fp1=fopen(argv[1],"r"))  == NULL){ //fail to open file for read
        printf("fale to open file.");
        return 0;
    }
    if((fp2=fopen(argv[2],"wt")) == NULL){ //fail to open file for write
        printf("fail to create file for write.");
        return 0;
    }

    while(fgets(str,sizeof(str),fp1)){   // read a file and write to another file line by line
        printf("%s\n",str);
        fputs(str, fp2);
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}
```

## Submission 

- Source code [.c]
- git commit history [.pdf]
- Text file of the output result obtained by 10 characters [.txt]

## File naming convention

- Source code : STUDENTID_ASSIGNMENT##.c [example: 20191234_04.c]
- git commit history : STUDENTID_ASSIGNMENT##.pdf [example: 20191234_04.pdf]
- Text file of the output result : STUDENTID_ASSIGNMENT##.txt [example: 20191234_04.txt]
