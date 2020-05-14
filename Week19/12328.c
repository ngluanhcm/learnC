// Exercise 12328
// Write a program to read in numbers until the number -999 is encountered. 
// The sum of all number read until this point should be printed out.
//  gcc 12328.c -o 12328 -lm
//  ./12328

#include <math.h>
#include <stdio.h>

int main(void){
    int sum = 0, value = 0;
    while (value != -999)
    {
        printf("input number: ");
        scanf("%d",&value);      
        sum += value;
    }
    printf("Sum of all number: %d\n",sum+999);
    
}