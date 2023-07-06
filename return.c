#include<stdio.h>
int reversed(int x)
{
int x,num2 ;
num2=1-x;
return num2;
}
int main()
{
    int num1;
    printf("value is ");
    scanf("%d",num1);
    int res=reversed(num1);
    printf("%d is the reversed",res);
    return 0;
}