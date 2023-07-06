#include<stdio.h>
int small_value(int[]);
int main()
{  
    int result;
    int array[10] = {1,2,3,4,5,6,7,9,0,11};

    printf("Value if: %d",result = small_value(array));
}

int small_value(int array[])
{
    int count =1;
    for(int i=0; i<10; i++)
    for(int j=0; j<i; j++)
    {
        if(array[j] == count)
        count++;
    }
    return count;
}