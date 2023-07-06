#include<stdio.h>
int largestvalue(int x,int y,int z)
{
int large;
   
if (x>y && x>z)
{
large = x;

}
else if(y>x && y>z)
{
large = y;
}
else
{
large =z;
}
return large;

}
int main()
{
    
    
int x,y,z;
printf("Enter the first interger x:");
scanf("%d",&x);
printf("Enter the first interger y:");
scanf("%d",&y);
printf("Enter the first interger z:");
scanf("%d",&z);

printf("%d is the largest among three\n",largestvalue(x,y,z));

    
return 0;
}