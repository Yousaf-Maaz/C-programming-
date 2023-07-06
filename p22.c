#include<stdio.h>
int shapes(int symbol);//function declartion.
int main ()
{
    char x;
    printf("Enter the symbol:\n");
    scanf("%c",&x);
    shapes(x);//function call.
    return 0;
}

int shapes(int symbol) //creating function.
{
int rows=8;
int i,j,k,l;
    for(i=1;i<rows;i++){
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    } 
    for(l=1;l<=rows;l++){
        for(k=6;k>l;k--){
        printf("*");
    }
        printf("\n");
    }   
    return symbol;
}