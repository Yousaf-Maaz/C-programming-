#include<stdio.h>
int main()
{
   int a[3][4];
   int maximum;
   printf("Enter the input:");
   for (int  i = 0; i <3 ; i++){
    for (int  j = 0; j < 4; j++){

          scanf("%d",&a[i][j]);

   }
   maximum = a[0][0];

   for (int  i = 0; i < 3; i++)
   {
    for ( int j = 0; j < 4; j++)
    {
        if(a[i][j]>maximum)
        maximum=a[i][j];
    }
    
   }
   }
   printf("%d is the largest element",maximum);




    return 0;

}