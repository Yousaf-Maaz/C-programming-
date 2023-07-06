#include<stdio.h>
int  main()
{
  int maximun,minimum,sum=0,even=0,odd=0;
  float mean=0;
    int values[10];
    printf("Enter the number:");
  for(int i = 0; i < 10; ++i) {
scanf("%d", &values[i]);
}
printf("Displaying integers:\n");
// printing elements of an array
for(int y = 0; y < 10; ++y) {
printf("%d ", values[y]);
}
printf("\n");
minimum=values[0];
for (int z=1;z<10;z++)
{
  if(minimum>values[z])
  minimum=values[z];
}
printf("minimum:%d",minimum);
maximun=values[0];

for(int j=1;j<10;j++)
{
  if(maximun<values[j])
  maximun=values[j];
}
printf("\nmaximum:%d",maximun);
sum = 0;
for ( int k =0 ; k<10; k++)
{
 sum = sum + values[k] ;
}
mean=sum/10;
printf("\nThe average is %f",mean);
printf("\nThis is the last element %d",values[9]);
printf("\nThe second element is %d",values[2]);

for(int h=0;h<10;h++)
{
  if(values[h]%2==0)
  even++;
  else
  odd++;
}
printf("\neven:%d \nodd:%d",even,odd);
printf("\nIn Reverse Order ");
for(int f=9;f>=0;--f)
printf("%d, ",values[f]);
  return 0;
}