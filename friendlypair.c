
#include <stdio.h>
void is_friendlypair(int num1,int num2);
int main()
{
    int num1;
    int num2;
    printf("Enter first number");
    scanf("%d",&num1);
    printf("\nEnter second number");
    scanf("%d",&num2);
    is_friendlypair(num1,num2);
    return 0;
}

void is_friendlypair(int num1,int num2)
{
    int sum1;
    int sum2;
    for(int i=0;i<=num1;i++)
    {
        if(num1%i==0)
        sum1+=i; 
    }

    for(int i=0;i<=num2;i++)
    {
        if(num2%i==0)
        sum2+=i;
    }    

    if(sum1/num1==sum2/num2)
    printf("\nThe two numbers entered are indeed friendly pair",sum1);
    else
    printf("\nThe two numbers entered are not friendly pairs",sum2);

     return;



}