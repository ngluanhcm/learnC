/*
Exercise 12587
Write a function that converts all characters of an input string to upper case characters.

gcc 12587.c -o 12587 -lm
./12587
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char str[100];
    int i = 0;
    printf("Input string ");
    scanf("%s",str);
    printf("String is %s\n", str);
    while (str[i])
    {
        putchar(toupper(str[i])); // viet hoa
        // putchar(tolower(str[i])); // viet thtuong
        i++;
    } 
    printf("\n");
}