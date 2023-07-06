#include<stdio.h>
int bill(int a);
int main()
{
    int price;
    int tax;
    int tip;
    int total;
    int b;

    printf("enter price");
    scanf("%d",&price);
    b=bill(price);
    return 0;

}
int bill(int a)
{
    int tax=a*(4.74/100);
    int total=a=tax;
    int tip=total*0.1;
    printf("tax:%d\ntip:%d\ntotal:%d\n",tax,tip,total);
}
