/*  Write a program which takes the day number of a week and displays a
unique greeting message for the day.    */

#include<stdio.h>

int main()
{
    int ch;

    printf("\n Enter your choice->");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
                printf("\n hello! Have a Nice Day.");
                break;

        case 2:
                printf("\n You Will Never Have This Day Again, So Make It Count !!");
                break;

        case 3:
                printf("\n hey! Start the day with happiness.");
                break;

        case 4:
                printf("\n May luck be with your sides always and forever.");
                break;

        case 5:
                printf("\n I hope have a great day.");
                break;

        case 6:
                printf("\n Enjoy Weekend !");
                break;

        case 7:
                printf("\n Happy Sunday to you!!");
                break;

        dafault:
                printf("\n Invalid");

    }

    return 0;
}
