
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int compute_sum();
int get_rounds();
int computer_guess();
int player_guess();
int player_capital(int rounds);
int computer_capital(int rounds);
int play(int rounds);


int main()
{
    int rounds;
    int res;
    printf("Enter number of rounds you want to play");
    scanf("%d",&rounds);
    res=play(rounds);
    if(res==1)
    printf("Congratulation!!! You won");
    else
    printf(" You lost :-( ");
    return 0;
}

int play(int rounds)
{
    int num;
    num=compute_sum();
    int r_player;
    r_player=rounds;
    int r_computer;
    r_computer=rounds;
    int gplayer;
    int gcomp;

    for(int i=1;i<=rounds;i++)
    {
        printf("Your turn.\nTake a guess");
        gplayer=player_guess();
        if(gplayer==num)
        {
            printf("Congratulation you guessed it correctly\nComputer's turn");
            num=compute_sum();
        }
        
        else
        {
            r_player=r_player-10;
            printf("\nWrong guess.\n\nComputer's turn");   
        }
        
        gcomp=computer_guess();
        if(gcomp==num)
        {
            printf("\nComputer guessed it correctly.");
            num=compute_sum();
        }
        
        else
        {
            printf("\nComputer made a wrong guess.");
            r_computer=r_computer-10;
        }
    }
    
    if(r_computer!=r_player)
    return 0;
    else
    return 1;

}

int compute_sum()
{
    int cardA;
    int cardB;
    int sum;
    srand(time(NULL));
    cardA=rand()%10;
    cardB=rand()%10;
    sum=cardA+cardB;
    return sum;
}

int player_guess()
{
    int g;
    scanf("%d",&g);
    return g;
}

int computer_guess()
{
    srand(time(NULL));
    int g;
    g=rand()%(21-3)+3;
    return g;
}