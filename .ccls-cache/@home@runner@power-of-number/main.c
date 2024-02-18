#include<stdio.h>
int main()
{
  int number,power;
printf("Enter a Number :");
scanf("%d",&number);
  
  printf("Enter Power of the Number :");
  scanf("%d",&power);

printf("%d^%d",number,power);

int a= number;  
  
  for(int i=0; i<=power; ++i)
  {
    
    number = a*a;
  }
printf("\n%d",number);
    }