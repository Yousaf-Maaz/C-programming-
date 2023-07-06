#include<stdio.h>
int main()
{
int A;
printf("Enter an integer x:\n");
scanf("%d",&A);
int result;
result=A%2;


if (result==0)
{
printf("%d is an even integer\n ",A);
}
else
{
    printf("%d is an odd integer\n",A);
}
return 0;
}