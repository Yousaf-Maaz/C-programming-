#include<stdio.h>  
int main()    
{    
 int i,Y=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++){    
      Y=Y*i;    
  }    
  printf("Factorial of %d is: %d",number,Y);    
return 0;  
}   