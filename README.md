# Assignment 06

> Write a code in C programming for the permutation of a list of characters given by an input file and save its output to a text file

## Parameters

- Filename to read a list of characters (maximum number of characters is 6)
- Filename to save the permutation of a given list of characters and their counts

```console
$ program.exe input.txt output.txt
```

## Input from a text file (input.txt)

- the number of characters
- a list of characters

```console
3
a
b
c
```

## Output to a text file (output.txt)

- Format : [###] a permutation
    - [###] : the count of the permutation
    - permutation : a permutation of a given list of characters
- Personal signature that can identify the writer in a unique way

```console
[001] a b c
[002] a c b
[003] b a c
[004] b c a
[005] c a b
[006] c b a
*********************
Byung-Woo Hong
Student ID : 12345678
*********************
```

## Submission 

- Source code [.c]
- git commit history [.pdf]
- an example of input file [.txt]
- an example of output file [.txt]

## File naming convention

- Source code : STUDENTID_ASSIGNMENT##.c [example: 20191234_06.c]
- git commit history : STUDENTID_ASSIGNMENT##.pdf [example: 20191234_06.pdf]
- input file : STUDENTID_ASSIGNMENT##_input.txt [example: 20191234_06_input.txt]
- output file : STUDENTID_ASSIGNMENT##_output.txt [example: 20191234_06_output.txt]
