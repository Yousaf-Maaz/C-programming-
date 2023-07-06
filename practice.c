#include<stdio.h>
int areaofrectangle(int length,int breadth)
{
    int area;
    area = length*breadth;
    return area;
}
int main()
{
int length=10 ,breadth=3;

int area=areaofrectangle(length,breadth);
printf("%d\n",area);
}