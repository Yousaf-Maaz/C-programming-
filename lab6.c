#include<stdio.h>

int triangle(int a, int b);

int main()
{

 int a,result;
 printf("enter a\n");

 scanf("%d",&a);
 int b;
 printf("enter b\n");

 scanf("%d",&b);
 
 result=triangle(a,b);
printf("third angle %d\n")

 return 0;

}

int triangle(int a, int b)

{
    int find;
    find=180-(a+b);
    return find;
}
