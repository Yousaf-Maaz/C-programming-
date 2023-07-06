


#include<stdio.h>
int main()
{
    int abd[3][3];
    int i,j;
    int sum=0;
    printf("Enter input :");
    for (int  i = 0; i < 3; i++)
    {
        for(int j=0;j<3;j++){
            scanf("%d",&abd[i][j]);
        }
    }
    for(int i=0;i<3;i++){

     for(int j=0;j<3;j++) 
     {if(i==j){
     sum=sum+abd[i][j];
     }
     }
    
}
 printf("Dum :%d ",sum);
return 0;
}