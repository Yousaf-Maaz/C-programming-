#include<stdio.h>
int main()
{
int x;
printf("Enter first integer x:\n");

scanf("%d",&x);
printf("Enter second integer y:\n");
int y;
scanf("%d",&y);
if (x>y)
{
printf(" first integer %d is greater than second integer %d\n",x,y);/* code */
}
else
{
    printf("second integer %d is greater than first integer %d\n ",y,x);
}
return 0;
}