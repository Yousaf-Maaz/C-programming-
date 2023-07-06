#include<stdio.h>

int reversed(int a);
int main()
{
int a;
int rev;
printf("enter a number\n");

scanf("%d",&a);
 rev=  reversed(a); 
 
  return 0;
}
int reversed(int a)

{
    int a1=a/100;
    int a2=(a/10)%10;
    int a3=a%10;

    printf("%d%d%d",a3,a2,a1);
}






