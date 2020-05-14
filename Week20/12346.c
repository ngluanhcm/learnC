/*
Exercise 12346
Write a function ``replace'' which takes a pointer to a string as a parameter, which replaces all spaces in that string by minus
signs, and delivers the number of spaces it replaced.
Thus
char *cat = "The cat sat";
n = replace( cat );
should set
cat to "The-cat-sat"
and
n to 2.

gcc 12346.c -o 12346 -lm
./12346
*/


#include <stdio.h>
#include <string.h>

int replace(char sting[]){
    int length, i = 0;
    length = strlen(sting) - 1;
    while(sting[length]){
        if(sting[length] == ' '){
            sting[length] = '-';
            i++;
        }
        length--;
    }
    return i;
}

int main(void){
    char cat[] = "The cat cat";
    int n = replace(cat);
    printf("%s\n",cat);
    printf("%d\n",n);

}