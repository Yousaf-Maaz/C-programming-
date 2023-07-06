#include <stdio.h>
int main()
{
  float speed;
  float distance;
  int time;
  printf("Enter speed of the vehicle in miles:\n");
  scanf("%f",&speed);
  if(speed<0)
  {
    //while(speed<0)
    printf("\nSpeed should always be positive");
  }
  printf("How much time it travelled:\n");
  scanf("%d",&time);
   printf("time(in hours)\t\t\tDistance travelled(in miles)");
  for(int i=1;i<=time;i++)
  {
   
    distance=speed*i;
    printf("\n%d\t\t\t\t%.2f",i,distance);

  }
return 0;
}