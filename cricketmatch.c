#include<stdio.h>
int main()//main fuction..
{
    printf("Enter the score greater than 0: \nEnter the Wickets greater than 0 and less than 11:\n");
    int score,wicket;
    printf("Enter the score/runs:");
    scanf("%d",&score);//input score
    printf("Enter the wickets remaining:");
    scanf("%d",&wicket);//input remaining wickets
    
    if(score>300)//condition is used for requirement of question.
   printf("PAkistan win the match by %d wickets",wicket);
     else if (score==300 && wicket==0)//if match tie
    printf("Match draw");
    else if (score<=300)
    printf("%d is need with %d wickets",300-score,wicket);
    return 0;
}