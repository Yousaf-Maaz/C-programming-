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

if (townA_P < townB_p && growthA > growthB)
    {
          
        do {
                (townA_P = ((growthA / 100) * townA_P) + townA_P); // calculates population growth in one year
                (townB_p = ((growthB / 100) * townB_p) + townB_p);
                count++;
            }

            while (townA_P < townB_p);{
            printf("\nTown A will surpass Town B in population after %d",count);
            printf("\nThe final population of Town A is %d:",townA_P);
            printf("\nThe final population of Town B is %d:",townB_p);
        }
        //  else
        // printf("invaild ");
    }
    return 0;
}