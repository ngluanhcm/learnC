/*
Bitwise Operators
 Bit Fields
 
 Exercise 12507
 Write a function that prints out an 8-bit (unsigned char) number in binary format.

 gcc 12507.c -o 12507 -lm
./12507
 */

#include <stdio.h>
int main() {
    char letter;
    printf("\nInput letter: ");
    scanf("%s", &letter);

    int binary[8];
    for(int n = 0; n < 8; n++)
        binary[7-n] = (letter >> n) & 1;
    /* print result */
     for(int n = 0; n < 8; n++)
        printf("%d", binary[n]);
        printf("\n");
        return 0;
}