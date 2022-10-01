/* Program to take the value from the user as input electricity unit charges
    and calculate total electricity bill according to the given condition . Using
    the switch statement.

        For the first 50 units Rs. 0.50/unit
        For the next 100 units Rs. 0.75/unit
        For the next 100 units Rs. 1.20/unit
        For units above 250 Rs. 1.50/unit

        An additional surcharge of 20% is added to the bill.        */

#include<stdio.h>

int main()
{
    int unit,bill;
    float discount;

    printf("\n Enter unit->");
    scanf("%d",&unit);

    if(unit>=1 && unit<=51)
    {
        bill=unit*5;    //first 50 unit
    }
    else  if(unit>=52 && unit<=152)
    {
        bill=(unit-50)*7; //second 100 unit
        bill=bill+250;
    }
    else   if(unit>=153 && unit<=253)
    {
        bill=(unit-150)*9;  //third 100 unit
        bill=bill+950;
    }
    else
    {
        bill=(unit-250)*10;  //above 250 unit
        bill=bill+1850;
    }
    discount=bill*1.2;
    bill=bill-discount;
    printf("your bill is %d",bill);

    return 0;
}
