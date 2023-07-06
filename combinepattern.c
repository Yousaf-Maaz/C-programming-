#include <stdio.h>
int main()
{
  int i,j,k,rows=5;

  
  for (i=0; i<rows; i++)//loops start
  {

    for (j=0; j<i; j++)//nested loop loop in a loop
    {
      printf(" ");//for space 
    }

   for ( k = rows; k > i; k--)//again for pattern
   {
    printf("*");
   }
   
   printf("\n");
  
}

return 0;
}