#include<stdio.h>
int main()
{
    char membership;//for charater m or n
    int age;//for age given by users
    
  
     printf("\nEnter M if Member  and N non-member:");
    scanf("%c",&membership);
    printf("Enter the age :");
    scanf("%d",&age);
    if(membership=='M'||membership=='m')
    {
        if(age>=65)
        printf("fee is 5$");
        else if(age<65)
        printf("fee is 10$");
    }
    else if(membership='N'||membership=='n')
    printf("20$");
     return 0;
}