# My-Programming-Language
My Programming Language (Compiler Design using Flex and Bison in C)

# Commands
flex main.l

bison -d main.y

gcc lex.yy.c main.tab.c -o parser.exe -lm

parser.exe < input.txt
