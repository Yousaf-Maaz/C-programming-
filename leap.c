#include<stdio.h>//incude standard i/o.
int isleap(int year);//function declaration
int main()//main function call.
{
    int a;//integer a.
    printf("Enter the Year:\n",a);//show on screen.
    scanf("%d",&a);//for user to enter data.
    int b=isleap(a);//function call.
    return 0;

}
int isleap(int year)//creating function.
{
    int result;
    result=year%4;//for leap logic
    int b;
    b=year/400;//for century year.
if (result==0)//if condition is true then leap year.
{
    printf("%d is leap year",year);
}
else if (b==0)//if this  condition is true then also leap year.
{
     printf("%d is leap year",year);
}


else//if not the not a leap year.
{
    printf("%d is not a leap year\n", year);
}
  return 0;
}