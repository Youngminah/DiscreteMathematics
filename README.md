# Assignment 07

> Write a code in C programming to build a dictionary of words from a given text file and count number of words, and save the results as a text file

## Parameters

- Filename of a text file to read 
- Filename of a text file to write

```console
$ program.exe input.txt output.txt
```

## Input text file (input.txt)

- Input file consists of alphanumeric characters and delimiters
- Word is defined by alphanumeric characters between delimiters
- Delimiters are defined by ASCII codes between 0 and 127 except alphanumeric characters
- Ignore the alphabet case and convert all the characters to lowercase

![ASCII code](ascii.png)

```console
Hello World! This is a discrete/mathematics course. This is one of the 10programming-courses as well~
```

## Output text file (output.txt)

- Format : [####] string (####)
    - [####] index of the word 'string'
    - string : word
    - (####) : count of the word 'string'
    -[total] #### : total count of all the words
- Signature

```console
[0001] hello (1)
[0002] world (1)
[0003] this (2)
[0004] is (2)
[0005] a (1)
[0006] discrete (1)
[0007] mathematics (1)
[0008] course (1)
[0009] one (1)
[0010] of (1)
[0011] the (1)
[0012] 10programming (1)
[0013] courses (1)
[0014] as (1)
[0015] well (1)
[total] 0017
*********************
Byung-Woo Hong
Student ID : 12345678
*********************
```

## Example of using ```strtok``` function for splitting a sentence into words with delimiters 

```c
#include <stdio.h>
#include <string.h>

int main(void)
{
    int toknum = 0;
    char src[] = "Hello,, world!";
    const char delimiters[] = ", !";
    char *token = strtok(src, delimiters);
    while (token != NULL)
    {
        printf("%d: [%s]\n", ++toknum, token);
        token = strtok(NULL, delimiters);
    }
    /* source is now "Hello\0, world\0\0" */
}
```

Output

```console
1: [Hello]
2: [world]
```

You may want to use the following functions: ```strstr```, ```strcasestr```, ```strcmp```, ```strncmp```, ```fopen```, ```fgets```, ```fclose```, ```strtok```

## Submission 

- Source code [.c]
- git commit history [.pdf]
- output file [.txt]

## File naming convention

- Source code : STUDENTID_ASSIGNMENT##.c [example: 20191234_07.c]
- git commit history : STUDENTID_ASSIGNMENT##.pdf [example: 20191234_07.pdf]
- output file : STUDENTID_ASSIGNMENT##_output.txt [example: 20191234_07_output.txt]
