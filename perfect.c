#include<stdio.h>
int main()
{
    int i=1,u=1,sum=0;
    printf("Finding the first 4 perfect number:\n ");
   while (i <= 10000) //loop and 10000 becuse first 4 perfect.
  {
    while (u <= 10000) 
    {
      if (u < i) 
      {
        if (i % u == 0)//first finding the perfect number ..
          sum = sum + u;
      }
      u++;//for increment for checking more number upto 10000
    }
    if (sum == i) {
      printf("%d\n",i);
    }
    i++;
    u = 1;
    sum = 0;
  }
  return 0;
}