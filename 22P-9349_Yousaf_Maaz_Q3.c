
#include<stdio.h>
#include <string.h>
int main()
{
    int counter=0;
    int score;
    char array[200];
    printf("Enter the words\n");
    scanf("%s",array);
    int res=strlen(array);
    char words;
    for(int i=0;i<res;i++)//this loop will check for those words.
    {
        words=array[i];
            if(  words=='C'||words=='c'||words=='f'||words=='F'||words=='h'||words=='H'||words=='i'||words=='I'||words=='J'||words=='j'||words=='K'||words=='k'||words=='M'||words=='m'||words=='N' ||words=='n' ||words=='U' ||words=='u' ||words=='S' ||words=='s'||words=='V'||words=='v'||words=='W'||words=='w'||words=='X'||words=='x'||words=='Y'||words=='y'||words=='Z'||words=='z')
            counter++;
    }
    score=counter/2;
    if(score<=1)
    printf("Not even a medal\n");
    else if (score==2)
    printf("Bronze!\n");
    else if(score==3)
    printf("Silver\n");
    else if(score>3)
    printf("Gold\n");
    
    
    
}