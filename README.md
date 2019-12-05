# Assignment 05

> Write a code in C programming for the summation of numbers in a list given by an input file using a recursive function

## Parameters

- Filename to read the number of integers and a list of integers (maximum number of integers is 100)
- Filename to save the recursive step of the summation

```console
$ program.exe input.txt output.txt
```

## Input from a text file (input.txt)

- the number of integers
- a list of integers

```console
10
1
2
3
4
5
6
7
8
9
10
```

## Output to a text file (output.txt)

- Format : [###] integer_sum
    - [###] : the index of the recursive step in the decreasing order
    - integer_sum : the summation of the integers up to the index [###]
- Personal signature that can identify the writer in a unique way

```console
[010] 10
[009] 19
[008] 27
[007] 34
[006] 40
[005] 45
[004] 49
[003] 52
[002] 54
[001] 55
*********************
Byung-Woo Hong
Student ID : 12345678
*********************
```

## Sample Code

```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

int sumNumbers(int* pNumbers, int nIndex) 
{   
    // basis step
    if( nIndex <= 0)
    {   
    
    }
    // recursive step
    else
    {   
    
    }
}
 

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

    //
    // recursive sum
    int     nNumber     = 10;   // read from the input file
    int*    pNumbers    = (int*) calloc(nNumber, sizeof(int));

    for(int i = 0; i < nNumber; i++)
    {   
        pNumbers[i] = 1;        // assign numbers from the input file 
    }
    

    int     nSum    = sumNumbers(pNumbers, nNumber);

    printf("%d\n", nSum);

    free(pNumbers);
    //
    
    fclose(fp1);
    fclose(fp2);
    return 0;
}
```

## Submission 

- Source code [.c]
- git commit history [.pdf]
- input file [.txt]
- output file [.txt]

## File naming convention

- Source code : STUDENTID_ASSIGNMENT##.c [example: 20191234_05.c]
- git commit history : STUDENTID_ASSIGNMENT##.pdf [example: 20191234_05.pdf]
- input file : STUDENTID_ASSIGNMENT##_input.txt [example: 20191234_05_input.txt]
- output file : STUDENTID_ASSIGNMENT##_output.txt [example: 20191234_05_output.txt]
