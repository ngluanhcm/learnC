    /*
Exercise 12454
Write a program to find the number of times that a given word(i.e. a short string) occurs in a sentence
(i.e. a long string!).
Read data from standard input. The first line is a single word, which is followed by general text on the
second line. Read both up to a newline character, and insert a terminating null before processing.
Typical output should be:
The word is "the".
The sentence is "the cat sat on the mat".
The word occurs 2 times.

gcc 12454.c -o 12454 -lm
./12454
    */

#include <stdio.h>
#include <string.h>

int main(void){
    char word[10],str[100];
    char count = 0;
    char *ptr;

    printf("Input the sentence: ");
    fgets(str, sizeof(str), stdin);

    printf("Input the word: ");
    scanf("%s",word);
    
    printf("The word is \"%s\".\n",word);
    printf("The sentence is: ");
    puts(str);

    ptr = str;
    while(ptr = strstr(ptr,word)){
        count++;
        ptr++;
    }
    printf("The word occurs %d times",count);

}

