# Project: 0x00. C - Hello, World

## Resources

#### Read or watch:

* [Everything you need to know to start with C.pdf](https://intranet.alxswe.com/rltoken/P01aLj9BDfDUOv-y9x82Yw)
* [Dennis Ritchie](https://intranet.alxswe.com/rltoken/YWFrRob_-Yo-_NQikMLI-g)
* ["C" Programming Language: Brian Kernighan](https://intranet.alxswe.com/rltoken/W4oygfMgAp5Hyc7o6QuSYQ)
* [Why C Programming Is Awesome](https://intranet.alxswe.com/rltoken/WYdE1novaWa0yt5fzGvLBw)
* [Learning to program in C part 1](https://intranet.alxswe.com/rltoken/aE_pZLbexuLroHA0FmjLbw)
* [Learning to program in C part 2](https://intranet.alxswe.com/rltoken/3a5y1N-0FlTaPbKRxlRLlQ)
* [Understanding C program Compilation Process](https://intranet.alxswe.com/rltoken/idYJyVfQRZ9e5aljiT5UKg)
* [Betty Coding Style](https://intranet.alxswe.com/rltoken/wJg_qB9ducisfVQNk62htg)
* [Hash-bang under the hood](https://intranet.alxswe.com/rltoken/BFBusLVUbFgGFcOGVPQcRw)
* [Linus Torvalds on C vs. C++](https://intranet.alxswe.com/rltoken/JrokM8Pk6bd9wPqQvEfSAA)
## Learning Objectives

### General

* Why C programming is awesome 
* Who invented C
* Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
* What happens when you type <code>gcc main.c</code>
* What is an entry point
* What is <code>main</code>
* How to print text using <code>printf</code>, <code>puts</code> and <code>putchar</code>
* How to get the size of a specific type using the unary operator <code>sizeof</code>
* How to compile using <code>gcc</code>
* What is the default program name when compiling with <code>gcc</code>
* What is the official C coding style and how to check your code with <code>betty-style</code>
* How to find the right header to include in your source code when using a standard library function
* How does the <code>main</code> function influence the return value of the program
## Tasks

| Task | Description |
| ---- | ---- |
| [0-preprocessor](./0-preprocessor) | Write a script that runs a C file through the preprocessor and save the result into another file. The C file name will be saved in the variable $CFILE. The output should be saved in the file c |
| [1-compiler](./1-compiler) | Write a script that compiles a C file but does not link.The C file name will be saved in the variable $CFILE The output file should be named the same as the C file, but with the extension .o instead of .c. Example: if the C file is main.c the output file should be main.o |
| [2-assembler](./2-assembler) | Write a script that generates the assembly code of a C code and save it in an output file. The C file name will be saved in the variable $CFILE The output file should be named the same as the C file, but with the extension .s instead of .c. Example: if the C file is main.c, the output file should be main.s |
| [3-name](./3-name) | Write a script that compiles a C file and creates an executable named cisfun.The C file name will be saved in the variable $CFILE |
| [4-puts.c](./4-puts.c) | Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.Use the function puts You are not allowed to use printf Your program should end with the value 0. |
| [5-printf.c](./5-printf.c) | Write a C program that prints exactly with proper grammar but the outcome is a piece of art,, followed by a new line.Use the function printf You are not allowed to use the function puts Your program should return 0. |
| [6-size.c](./6-size.c) | Write a C program that prints the size of various types on the computer it is compiled and run on. You should produce the exact same output as in the example, Warnings are allowed ,Your program should return 0, You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option. |
| [100-intel](./100-intel) | Write a script that generates the assembly code (Intelsyntax) of a C code and save it in an output file.The C file name will be saved in the variable $CFILE.The output file should be named the same as the C file, but with the extension .s instead of .c . Example: if the C file is main.c, the output file should be main.s .| 
| [101-quote.c](./101-quote.c) | Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error .You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts .Your program should return 1 .Your program should compile without any warnings when using the -Wall gcc option. |