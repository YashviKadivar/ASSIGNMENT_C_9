/* Convert the following if-else-if construct into switch case:

    if(var == 1)
        System.out.println("good");
    else if(var == 2)
        System.out.println("better");
    else if(var == 3)
        System.out.println("best");
    else
        System.out.println("invalid");  */

#include<stdio.h>

int main()
{
    int ch;

    printf("\n Enter your choice->");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            printf("Good");
            break;

        case 2:
            printf("Better");
            break;

        case 3:
            printf("Best");
            break;

        default:
            printf("\n Invalid");
    }

    return 0;
}
