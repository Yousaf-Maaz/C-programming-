#include<stdio.h>
int main()
{
int townA_P;
int townB_p;
int growthA;
int growthB;
int newpA;
int newpB;
int count=0;

printf("Enter the Town A population:");
scanf("%d",&townA_P);

printf("Enter the Town A growth rate :");
scanf("%d",&growthA);

printf("Enter the Town B population:");
scanf("%d",&townB_p);

printf("Enter the Town b growth rate (growth rate must be less than grownt rate of A) :");
scanf("%d",&growthB);

for (int  i = 0; i<10000; i++)
{
   townA_P = ((growthA / 100) * townA_P) + townA_P;
townB_p = ((growthB / 100) * townB_p) + townB_p;

    if(growthA>growthB)
    {
     newpA = ((growthA / 100) * townA_P) + townA_P;
newpB = ((growthB / 100) * townB_p) + townB_p;
count++;
}

}
 printf("%d is the year   ",count);


// if (growthA > growthB)
// {
// newpA = ((growthA / 100) * townA_P) + townA_P;
// newpB = ((growthB / 100) * townB_p) + townB_p;

// while (townA_P <= townB_p)
// {
// count+=1;

// townA_P = ((growthA / 100) * townA_P) + townA_P;
// townB_p = ((growthB / 100) * townB_p) + townB_p;
// }
// printf(" \n%d is  the number of years it will take for town A population to be equal or greater than the population of town B is",count );



// }
    return 0;
}