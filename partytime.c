#include<stdio.h>
int div_pizza(int i);//functions declare in global declaration.
int div_drinks(int j);
int div_amount(int k);

int main ()//main function.
{ 
int n;//number of guest or friend.
int b;//Slices or pieces of  pizza per guests. 
int c;//glasses per head .
float d;//amount each guest is to pay.

printf("n:");
scanf("%d",&n);//input
{
        b=div_pizza(n);//function call here in main.
        printf("Number of slices per head is: %d",b);
        c=div_drinks(n);
        printf("\nNumber of Glasses per head is: %d",c);
        d=div_amount(n);
        printf("\nThe amount each guest has to pay is: %.1f",d);//%.1f is for one number after point.
}
        return 0;
}
int div_pizza(int n)//creating functions.
{
    int largepizza=3;
    int pieces=largepizza*8;
    if (n<0 || n>15)/*condition for guest given in question.Returns true if one of the statements is true*/  
    return -1;
    else if(n==0 )//Equals to the limit given.
    return pieces;
    else
    return (15/n+1);
}
int div_drinks(int n)
{  
    int drinks=3*5;//total drinks
    if(n<0||n>15)
    return -1;
    else if(n==0 )
    return drinks;
    else
    return (15/(n+1));
} 
int div_amount(int n)
{
     int total=5000;//total amount.
     int friend_total=total/2;
     if (n==0)
     return 5000;
     else if(n<0 || n>15)
     return -1;
     else
     return (2500/n);
}
