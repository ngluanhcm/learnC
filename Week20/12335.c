/*
Exercise 12335
Write a C program to read through an array of any type. Write a C program to scan through this array to
find a particular value.

gcc 12335.c -o 12335 -lm
./12335
*/
#include <stdio.h>
 
const int MAX = 100;
 
 
void Inputarr(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nInput Element a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
void Arrayis(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("\nElement a[%d] = %d", i, a[i]);
    }
}
 
int Search(int a[], int n, int v){
    for(int i = 0;i < n; ++i){
        if(a[i] == v){
            return i;
        }
    }
    return -1;
}
 
int main(){
    int arr[MAX];
    int n;
    printf("\nInput size of array: ");
    do{
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\nInput size of array again: ");
        }
    }while(n <= 0 || n > MAX);
    printf("\n======Input arr=====\n");
    Inputarr(arr, n);
    printf("\n======Arr =====\n");
    Arrayis(arr, n);
    printf("\n======Search======\n");
    int v;
    printf("\nInput Element for search: ");
    scanf("%d", &v);
    int a = Search(arr, n, v);
    if(a == -1){
        printf("\nElement not available in array\n");
    }else{
        printf("\nFind Element %d in address %d!\n", v, a);
    }
}


