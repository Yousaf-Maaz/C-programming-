#include<stdio.h>
int main()
{
int days,hours,mintues,seconds;

printf("Enter seconds:");

scanf("%d",&seconds);

 days=seconds/86400;//one day=86400second.
  seconds=seconds%86400;//reminder back.


 hours=seconds/3600;//one hour contain 3600 second.
 seconds=seconds%3600;//reminder back


 mintues=seconds/60;//one mintue contain 60 seconds

 seconds=seconds%60;//reminder back.
 
  printf("days:%d ,hours:%d, mintues:%d, seconds:%d \n",days,hours,mintues,seconds);

return 0;



}