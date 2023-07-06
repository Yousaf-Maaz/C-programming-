/*Written by:Taha Nafis
  Date:9/01/23
  Description:This is a two player game. Player 1 is given 'X'while player 2 is given 'O'. 
  Both players enter the coordinate of the place they want to put their mark on.
  Dedication:To my parents,brother,friends(Abdullah,Yousaf,Rehan) who always support me.
*/


#include <stdio.h>
#include <time.h>
void printboard(char board[3][3]);//This function prints the board in which the game will be played//
int checkboard(char board[3][3]);//This function checks there is space on board left or not//
int checkwin(char board[3][3]);
int checkspace(char board[3][3],int a,int b);//This checks for whether the place player wants to access is empty or not
int input_verifier(int *a,int *b);//This checks whether input coordinates are valid or not//
void get_name(char name1[],char name2[]);//This gets the name of the players//
int main()
{
    printf("Description:This is a two player game. PLayer 1 is given 'X'while player 2 is given 'O'.\nBoth players enter the coordinate of the place they want to put their mark on.\n\n");
    char name1[20];
    char name2[20];
    sleep(2);
    get_name(name1,name2);
    char board[3][3]={{'*','*','*'},{'*','*','*'},{'*','*','*'}};
    printboard(board);
    int x;
    int y;
    int n=1;
    while(n!=0)
    {
        printf("\n%s, enter your move(X)\n",name1);
        scanf("%d%d",&x,&y);
        input_verifier(&x,&y);

        while(checkspace(board,x,y)==0)
        {
            printf("\nThis space has been occupied. Please enter again\n");
            scanf("%d%d",&x,&y);
            input_verifier(&x,&y);
        }
        board[x-1][y-1]='X';
        printboard(board);
        if(checkwin(board)==1)
        {
            printf("\nCongratulations %s you won",name1);
            sleep(3);//This function delays the execution of next line by 3 seconds.//
            return 0;
        }
        if(checkboard(board)==0)
        {
            printf("\nDraw!!!!!");
            sleep(3);
            return 0;
        }

        printf("\n%s, enter your move(O)\n",name2);
        scanf("%d%d",&x,&y);
        input_verifier(&x,&y);

        while(checkspace(board,x,y)==0)
        {
            printf("\nThis space has been occupied. Please enter again\n");
            scanf("%d%d",&x,&y);
            input_verifier(&x,&y);

        }
        board[x-1][y-1]='O';
        printboard(board);
         if(checkwin(board)==1)
        {
            printf("\nCongratulations %s you won",name2);
            sleep(3);
            return 0;
        }
        if(checkboard(board)==0)
        {
            printf("\nDraw!!!!!");
            sleep(3);
            return 0;
        }
    }

}

void printboard(char board[3][3])
{
    for(int i=0;i<3;i++)
    {
        printf("\n\n");
        for(int j=0;j<3;j++)
        printf("   %c",board[i][j]);
    }
}

int checkboard(char board[3][3])
{
    int flag=0;
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    {
        if(board[i][j]=='*')
        {
            flag=1;
        }
    }
    return flag;
}

int checkwin(char board[3][3])
{
    char temp;
    int flag;
    for(int i=0;i<3;i++)
    {
        flag=1;
     for(int j=0;j<2;j++)
    {
        temp=board[i][j];
        if (temp=='*')
        {
         flag=0;
         break;
        } 
        if(board[i][j+1]!=temp)
        flag=0;
    }
     if (flag==1)
     return 1; 
    }
    

    
    for(int i=0;i<3;i++)
    {
        flag=1;
    
    for(int j=0;j<2;j++)
    {
        temp=board[j][i];
        if(temp=='*')
        { 
         flag=0;
         break;
        } 
        if(board[j+1][i]!=temp)
        flag=0;
    }
    if (flag==1)
    return 1;
  
    }    
   

    flag=0; 
    if(((board[0][0]!='*')&&board[0][0]==board[1][1]&&board[1][1]==board[2][2])||((board[0][2]!='*')&&board[0][2]==board[1][1]&&board[1][1]==board[2][0]))
    flag=1; 
    if (flag==1)
    return 1; 
    }
int checkspace(char board[3][3],int a,int b)
{
    if(board[a-1][b-1]=='X'||board[a-1][b-1]=='O')
    {
        return 0;
    }
    else 
    return 1;
}

void get_name(char name1[],char name2[])
{
    printf("Enter name, player1.\n");
    gets(name1);
    printf("\nEnter name, player2.\n");
    gets(name2);

}

int input_verifier(int *a,int *b)
{
    int flag=1;
    while(flag!=0)
    {
       if (((*a-1)>=3||(*a-1)<0)||((*b-1)>=3||(*b-1)<0))
       {
        printf("Incorrect input!!! Enter again\n");
        scanf("%p%p",a,b);
       }
       else
       flag=0;
    }
  return 1;

}