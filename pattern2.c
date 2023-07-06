#include <stdio.h>
int main()
{
  int i,j,k,rows=6;

  
  for (i=0; i<rows; i++)//loop start
  {

    for (j=rows; j>i; j--)//nested loop
    {
      printf(" ");
    }

   for ( k = 1; k <= i; k++)//for pattern
   {
    printf("*");
   }
   
   printf("\n");
  
}

return 0;
}