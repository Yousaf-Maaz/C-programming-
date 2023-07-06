#include<stdio.h>
#include<math.h>
int main()
{
    int x1=0;//starts from 0 as given
    int y1=0;
    int x2=0;
    int y2=0;
    int count=0;
    int sum=0;
    int distance;
    int Totalnumberofsteps;
    do//using do while loop.
    {
        
        distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));//distance formula
        sum+=distance;
        count++;
        x1=x2;
        y1=y2;
        printf("\n****Enter new  coordinates****");
        scanf("%d%d",&x2,&y2);
     }
    while(x2!=x1||y2!=y1);
    
    if(count>1)
    {
      Totalnumberofsteps=(sum)/(count-1);
      printf("\nThe total distance covered is %d",sum);//for total number
      printf("\nTotal steps taken are %d",count-1);//steps taken
      printf("\nAverage distance per step is %d",Totalnumberofsteps);//average
    }

    else if(count==1)
    {
        printf("You have not moved from your original location");
    }
}
