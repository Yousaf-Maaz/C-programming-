#include<stdio.h>
int main()
{
    const float rise_year=1.5;
    float num_per_year=0;

    for (int i = 1; i <=25 ; i++)
    {
        num_per_year+=rise_year;
        printf("\n");
        printf("year : %d ---- %.1f",i,num_per_year);
    }


    return 0;
    
}