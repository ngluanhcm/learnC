//  Exercise 12306
// Given as input three integers representing a date as day, month, year, print out the number day, month and year for the following day's date.
// Typical input: 28 2 1992 Typical output: Date following 28:02:1992 is 29:02:1992 
//  gcc 12306.c -o 12306 -lm
//  ./12306
#include <math.h>
#include <stdio.h>

void checkDate(int *day, int *month, int *year, int *again);

int main(){
    int day,month,year;
    int again = 1;
    while (again == 1)
    {
        again = 0;
        printf("input day month year :\n");
        scanf("%d %d %d",&day, &month, &year);
        printf("\nDate following %d:%d:%d is ", day, month, year);
        checkDate(&day, &month, &year, &again);

        if (again == 0)
        {
            printf("%d:%d:%d\n",day,month,year);
            break;
        }

    }
}

void checkDate(int *day, int *month, int *year, int *again)
{       
        if (*year % 4 == 0)
        {
            if (*month > 12 || *month < 1)
            {
                printf("Bad month, input again\n");
                *again = 1;
            }
            switch (*month)
            {
            case 12:
                if (*day == 31)
                {
                    *day = 1;
                    *month = 1;
                    *year += 1;
                } else if (*day > 31 || *day < 1)
                {
                    printf("Bad day, input again\n");
                    *again = 1;
                } else
                {
                    day += 1;
                }
                break;
            
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
                if (*day == 31)
                {
                    *day = 1;
                    *month += 1;
                } else if (*day > 31 || *day < 1)
                {
                    printf("Bad day,input again\n");
                    *again = 1;
                } else
                {
                    *day += 1;
                }
                break;
            
            case 2:
                if (*day == 28)
                {
                    *day = 1;
                    *month += 1;
                } else if (*day > 28 || *day < 1)
                {
                    printf("Bad day,input again\n");
                    *again = 1;
                } else
                {
                    *day += 1;
                }
                break;
            
            case 4:
            case 6:
            case 9:
            case 11:
                if (*day == 30)
                {
                    *day = 1;
                    *month += 1;
                } else if (*day > 30 || *day < 1)
                {
                    printf("Bad day,input again\n");
                    *again = 1;
                } else
                {
                    *day += 1;
                }
                break;
            default:
                break;
            }
        } else
        {
            if (*month > 12 || *month < 1)
            {
                printf("Bad month, input again\n");
                *again = 1;
            }
            switch (*month)
            {
            case 12:
                if (*day == 31)
                {
                    *day = 1;
                    *month = 1;
                    *year += 1;
                } else if (*day > 31 || *day < 1)
                {
                    printf("Bad day,input again\n");
                    *again = 1;
                } else
                {
                    *day += 1;
                }
                break;
            
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
                if (*day == 31)
                {
                    *day = 1;
                    *month += 1;
                } else if (*day > 31 || *day < 1)
                {
                    printf("Bad day,input again\n");
                    *again = 1;
                } else
                {
                    *day += 1;
                }
                break;
            
            case 2:
                if (*day == 29)
                {
                    *day = 1;
                    *month += 1;
                } else if (*day > 29 || *day < 1)
                {
                    printf("Bad day,input again\n");
                    *again = 1;
                } else
                {
                    *day += 1;
                }
                break;
            
            case 4:
            case 6:
            case 9:
            case 11:
                if (*day == 30)
                {
                    *day = 1;
                    *month += 1;
                } else if (*day > 30 || *day < 1)
                {
                    printf("Bad day,input again\n");
                    *again = 1;
                } else
                {
                    *day += 1;
                }
                break;
            default:
                break;
            }
        }


};
