#include<stdio.h>
int main()
{

    int kilogram;
    float pounds;
    printf("Enter the value of kilogram:\n");
    scanf("%d",&kilogram);
    pounds=2.20462*kilogram;//pounds into kg
    printf("The value is %f",pounds);
    return 0;


}