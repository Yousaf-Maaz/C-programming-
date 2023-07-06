#include<stdio.h>
int result(int a);//function declare..
int main()//main function
{
int a;
int changenum;//reversed the number...

printf("Enter the 4 digit number \n");
scanf("%d", &a);
changenum= result(a);//functioncall...
return 0;
}
int result(int a)
{
	int num1=a/1000;//this process for changeing the number written in reversed order..
    int num2=(a/100)%10;
	int num3=(a/10)%10;
	int num4=a%10; 
	printf("%d%d%d%d",num4/2,num3/4,num2/2,num1/4);
}