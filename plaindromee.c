/*Write a program in which user will enter his name. The name will be passed
to a function which will check whether the string was palindrome or not and display a
message accordingly.*/



#include<stdio.h>
#include<string.h>

void checkweatherpalindrome(char  arr[50]); 
int main ()
{
    int temp; 
    int j=0;
char str[20]={0};
char str2[20]={0};
printf("Enter name: ");
scanf("%s",str);
//fgets(str, 50, stdin);//we use sizeof[str] which can replace with 50
printf("Your Name is %s\n",str);
for(int i=strlen(str)-1;i>=0;i--){
    temp=str[i];   
    str2[j] =temp;
   j++;
}
j++;
// str2[j] = '\0';
int compare=strcmp(str2,str);
printf("Compare value %d",compare);
printf("\nactual------>%s\n",str);
printf("\nrev------>%s\n",str2);
if(compare==0)
printf("Palindrome");
else
printf("not a palindrome");

    return 0;
}