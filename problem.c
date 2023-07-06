#include<stdio.h>
int main()
{


int a,b,x;

printf("Enter the value of a=");

scanf("%d", &a);


 printf("Enter the value of b=");
 scanf("%d",&b);
 


x= (a*a*a) - (b*b*b) - 3*a*b*(a-b);
printf("Result = %d\n",x);
return 0;



}