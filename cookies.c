#include<stdio.h>
int main()//main function.
{
int cookies;
printf("Enter the total number of cookies: ");
scanf("%d",&cookies);//user input for cookies.
int a;//for number of cookies in the box.
printf("Enter the  number of cookies in the box: ");
scanf("%d",&a);
int b;//for number of cookie boxes in the contanieer
printf("Enter the  number of cookie boxes in the containeer: ");
scanf("%d",&b);
int boxes;
int containeer;

boxes=cookies/a;//logic for finding boxes.
if (cookies%a==0)
{
    printf("%d box is required for %d cookies",cookies/a,cookies);
}
else if(cookies%a!=0)
{
printf("%d box is required for %d cookies \n leftover cookies are %d",cookies/a,cookies,cookies%a);
}
containeer=boxes/b;//logic for finding number of containeer.
if (boxes%b==0)
{
printf("\n%d containeeer is required for %d box",boxes/b,boxes);
}
else if (boxes%b!=0)
{
printf("\n%d containeer is required for %d box\n leftover boxes are %d",boxes/b,boxes,boxes%b);
}
return 0;
}