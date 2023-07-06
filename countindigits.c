#include<stdio.h>
int main()
{
    int a,count=0;
    printf("enter the number:",a);
    scanf("%d",&a);
    int temp = a;
    while (a>0)
    {
      a=a/10;
       
       ++count;
       
    }
    printf(" %d output should  be %d",temp,count);
    

    return 0;
}