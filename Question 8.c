/* Program to convert a positive number into a negative number and negative
    number into a positive number using a switch statement.     */

#include<stdio.h>

int main()
{
    int a,ch;

    printf("\n Enter a Number->");
    scanf("%d",&a);

    ch=(a>0);

    switch(ch)
    {
    case 0:
        a=a-(a*2);
        printf("\n %d",a);
        break;

    case 1:
        a=a-(a*2);
        printf("\n %d",a);
        break;
    }

    return 0;
}
