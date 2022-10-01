/* Write a program which takes the month number as an input and display
number of days in that month.  */

#include<stdio.h>

int main()
{
    int i,ch;

        printf("\n Enter a month->");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                   printf("\n 31 Days");
                   break;

            case 2:
                    printf("\n 28/29 Days");
                    break;

            case 3:
                    printf("\n 31 Days");
                    break;

            case 4:
                    printf("\n 30 Days");
                    break;

            case 5:
                    printf("\n 31 days");
                    break;

            case 6:
                    printf("\n 30 Days");
                    break;

            case 7:
                    printf("\n 31 Days");
                    break;

            case 8:
                    printf("\n 31 Days");
                    break;

            case 9:
                    printf("\n 30 Days");
                    break;

            case 10:
                    printf("\n 31 Days");
                    break;

            case 11:
                    printf("\n 30 Days");
                    break;

            case 12:
                    printf("\n 31 Days");
                    break;

            dafault:
                    printf("\n Invalid Month");
        }
}
