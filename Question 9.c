/* Program to Convert even number into its upper nearest odd number
    Switch Statement.  */

#include<stdio.h>

int main()
{
    int a,ch;

    printf("\n Enter a Number->");
    scanf("%d",&a);

    ch=(a%2);

    switch(ch)
    {
    case 0:
        a=a+1;
        printf("\n %d",a);
        break;

    case 1:
        printf("\n %d",a);
        break;
    }

    return 0;
}
