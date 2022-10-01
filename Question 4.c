/*  Write a menu driven program with the following options:

    a. Check whether a given set of three numbers are lengths of an
        isosceles triangle or not
    b. Check whether a given set of three numbers are lengths of sides of
        a right angled triangle or not
    c. Check whether a given set of three numbers are equilateral triangle
        or not
    d. Exit         */

#include<stdio.h>

int main()
{
    int choice,a,b,c;

    while(1)
    {
       printf("\n\n###################################################\n");
       printf("\n Enter Choice->\n");

       printf("\n 1-> to check isosceles triangle");
       printf("\n 2-> to check right angle triangle");
       printf("\n 3-> to check equilateral triangle");
       printf("\n 4->exit");

       scanf("%d",&choice);

       printf("Enter length of 3 sides of triangle\n");
       scanf("%d %d %d",&a,&b,&c);

       switch(choice)
       {
       case 1:
                if(a==b || b==c || c==a)
                    printf("isosceles");
                else
                    printf("not an isosceles");
                break;

       case 2:
                if(a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)
                    printf("right triangle");
                else
                    printf("not a right triangle");
                break;

       case 3:
                if( (a==b) && (b==c) )
                    printf("equilateral triangle");
                else
                    printf("not a equilateral triangle");
                break;

       case 4:
                return;

       default:
                printf("\n invalid");
       }
    }
  return 0;
}
