    /*
Exercise 12453
Write a C program to read through an array of any type using pointers. Write a C program to scan
through this array to find a particular value.
gcc 12453.c -o 12453 -lm
./12453
    */

#include <stdio.h>
void inputArray(int * arr, int size);
int search(int * arr, int size, int tosearch);

int main() {

    int array[20];
    int size, tosearch, searchtemp;


    printf("\n Enter size of the array\n");
    scanf("%d", &size);

    printf("\nEnter the array element\n");
    inputArray(array, size);

    printf("\nEnter the element to search\n");
    scanf("%d", &tosearch);

    searchtemp = search(array, size, tosearch);

    if (searchtemp == -1) {
        printf("\n %d not exit in array\n", tosearch);
    }else{
        printf("\n %d is found at %d position\n", tosearch, searchtemp + 1);
    }
    return 0;

}


void inputArray(int *arr, int size){
    
    int *arrEnd = (arr + size) - 1;
    printf("\n %d\n", size);
    while (arr<=arrEnd){
        scanf("%d", arr++);
    }
}

int search(int *arr, int size, int tosearch){
    int temp = 0;
    int *arrEnd = arr + size - 1;
    while(arr<=arrEnd && *arr!=tosearch){
        arr++;
        temp++;
    }
    if (arr<=arrEnd){
          return temp;
    }
    return -1;
}















    /*

int basic(){
    int a = 100;
    float f = 3.14159;
    double d = 12.34567;

    int *ptr;
    float *fptr;
    double *dptr;

    ptr = &a;
    fptr = &f;
    dptr = &d;

    printf("\n Kich thuoc bien a: %d", sizeof(a));
    printf("\n Dia chi cua bien a: %x", &a);
    printf("\n Gia tri trong bien a: %d", a);  
    
    printf("\n Kich thuoc bien f: %d", sizeof(f));
    printf("\n Dia chi cua bien f: %x", &f);
    printf("\n Gia tri trong bien f: %d", f);

    printf("\n Kich thuoc bien d: %d", sizeof(d));
    printf("\n Dia chi cua bien d: %x", &d);
    printf("\n Gia tri trong bien d: %lf\n", d);

    printf("\n Dia chi con tro ptr: %x", ptr); //dia chi cua a
    printf("\n Gia tri con tro tro toi: %d\n", *ptr); //gia tri cua a

    ptr = NULL;
    printf("\n Gia tri con tro ptr: %x\n", ptr); //co gia tri 0, con tro ko tro di dau het

    int arr[]={1,2,3,4,5};
    int *ptra = arr;
    int i;

    // printf("\nDia chi cua mang: %x", arr);
    // printf("\nDia chi cua arr[0]: %x", &arr[0]);
    // printf("\nDia chi cua ptra: %x", ptra);

    for(i = 0; i < 5; i++){
        printf("%5d", arr[i]);
    }

    printf("\n");

    // for(i = 0; i < 5; i++){
    //     printf("%5d", *(ptra+i));
    // }

    for(;ptra <= &arr[4]; ptra++){
        printf("%5d", *ptra);
    }

    printf("\n");
    return 0;
}
    */