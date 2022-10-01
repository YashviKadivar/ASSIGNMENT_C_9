/* C program to find all roots of a quadratic equation using switch case  */

#include<stdio.h>

int main()
{
  int num,x,y,rem,count=0,sum=0;

  printf("\n Enter a Number->");
  scanf("%d",&num);

  x=num;
  while(x!=0)
  {
      x=x/10;
      count++;
  }

  y=num;
  while(y!=0)
  {
      rem=y%10;
      y=y/10;
      sum += pow(rem,count);
  }

  if(sum==num)
    printf("\n %d is an armstrong number",num);
  else
    printf("\n %d is not an armstrong number",num);

  return 0;
}
