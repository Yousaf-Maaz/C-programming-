#include<stdio.h>
int main()
{
    int row;
    int col;
    int sum=0;
    printf("\nEnter number of rows ");
    scanf("%d",&row);
    printf("\nEnter number of columns ");
    scanf("%d",&col);

    printf("Enter the elements:\n");
    int a[row][col];
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    scanf("%d",&a[i][j]);

    for(int i=0;i<row;i++)
    {
        printf("\n");
    for(int j=0;j<col;j++)
    {
        if((i>0&&i<row-1)&&(j>0&&j<col-1))
        printf("  ",a[i][j]);
        else
        printf(" %d",a[i][j]);
    }
    }
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    {
        if(!((i>0&&i<row-1)&&(j>0&&j<col-1)))
        sum=sum+a[i][j];
    
    }
    printf("\nSum of boundary elements is:%d",sum);






}