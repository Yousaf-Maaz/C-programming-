#include<stdio.h>
int second(int days,int hours,int mins);//function declare 

int main ()
{

int  days,hours,mins;
 printf("Enter  days:\n ");
 scanf("%d",&days);

  printf("Enter  hours:\n ");
 scanf("%d",&hours);

  printf("Enter  mins:\n ");
 scanf("%d",&mins);
  int ans = second(days,hours,mins);
  printf("second are %d \n",&ans);
}

int second(int days,int hours,int mins)
{

  days=days*86400;
  hours=hours*60*60;
  mins=mins*60;
  return (days+hours+mins);
  

}