#include<stdio.h>
int main()
{
    int x,count=0;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Enter that value to search:");
    scanf("%d",&x);
    for (int i =0;i<10;i++)
    {
        if(x==a[i]){
        count++;}
    }
    printf("Element found in array : %d times", count);
    return 0;
}