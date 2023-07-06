#include<stdio.h>



int main()//using main function
{
int n , x , y;

printf("Enter number for symbol *: ");//enter the symbol for how many rows.
scanf("%d",&n);
for(x = 1; x <= n; x++)//loop starts
{
for(y = 1; y <= x;  y++)//nested loop
{
printf("*");
}
printf("\n");
}
for(x = n; x >= 1; x--)
{
for(y = 1; y <= x; y++)
{
printf( "*");
}
// ending line after each row
printf("\n");
}
return 0;
}