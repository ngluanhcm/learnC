//  Exercise 12277
// Given as input a floating (real) number of centimeters, print out the equivalent number of feet (integer) and inches (floating, 1 decimal), with the inches given to an accuracy of one decimal place.
// Assume 2.54 centimeters per inch, and 12 inches per foot.
// If the input value is 333.3, the output format should be:
// 333.3 centimeters is 10 feet 11.2 inches. 

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cm = 0.0,inches = 0.0;  
    int feet = 0; 

    printf("Input length in centimeter: ");
    scanf("%f",&cm);

    feet = (cm / 2.54) / 12;
    inches = (cm / 2.54) - (feet * 12);
    printf("%.1f centimeters is %d feet %.1f inches.\n",cm,feet,inches);
    exit ( 0 );
}