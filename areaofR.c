#include<stdio.h>
int areaofrectangle(int length,int breadth);//creating funtion for find area of reactane

int main()
{
int l=10 ,b=3;

int area=areaofrectangle(l,b);
printf("%d\n",area);

//here think about l and b 
//l=100 ,b=3;
area=areaofrectangle(l,b);
printf("%d\n",area);
}

int areaofrectangle(int length,int breadth)
{
int area;
area = length*breadth;
return area;
}