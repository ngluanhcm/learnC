//  Exercise 12304

// Write a program to read two characters, and print their value when interpreted as a 2-digit hexadecimal number. Accept upper case letters for values from 10 to 15. 
//  gcc 12304.c -o 12304 -lm
//  ./12304
#include <stdio.h>
#include <string.h>

int main(){
    unsigned char str[10],strH[10]; // unsigned char : 256 ký tự trong bảng mã ASCII
    int i,j;
     
    printf("Enter string: ");
    scanf("%[^\n]s",str);  // read all char until enter s: string
     
    printf("\nString is: %s\n",str);
     
    /*set strH with nulls*/
    // memset(strH,0,sizeof(strH)); // set all byte từ vị trí thứ 1 của strH thành 0
     
    /*converting str character into Hex and adding into strH*/
    for(i=0,j=0;i<strlen(str);i++,j+=2)
    { 
        sprintf((char*)strH+j,"%02X",str[i]); // chyen ki tu tai vi tri str[i] thanh hex roi gan vao trong mang strH
    }
    strH[j]='\0'; /*adding NULL in the end*/
     
    printf("Hexadecimal converted string is: \n");
    printf("%s\n",strH);
     
     
    return 0;
}