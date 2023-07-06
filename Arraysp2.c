#include <stdio.h>
int main()
{
int arr[60];
int j;
int k;
for(int i=0;i<60;i++)
scanf("%d",&arr[i]);
for (int i=0;i<20;i++)
{
arr[i]=i*i;
j=i+20;
arr[j]=j*j*j;
 k=i+40;
 arr[k]=i+k;
}

for(int i=0;i<20;i++)
{
printf("%d ",arr[i]);
}

printf("\n");
for(int j=20;j<40;j++)
{
printf("%d ",arr[j]);
}

printf("\n");
for(int k=40;k<60;k++)
{
printf("%d ",arr[k]);
}
return 0;
}
