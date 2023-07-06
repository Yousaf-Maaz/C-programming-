#include<stdio.h>
int lcm(int a, int b)
{
    int max;
if (a>b)
{
    max=a;
}else
{
    max=b;

}
int i;
for ( i = max; i < a*b; i++)
{
    if (i%a==0 && i%b==0)
    {
        break;
    }    
}
    return i;
}
int main()
{
int a,b;
printf("ENter the number: ",a);
scanf("%d",&a);
printf("ENter the number: ",b);
scanf("%d",&b);
int ans = lcm(a,b);
printf("LCM = %d\n",ans);
return 0 ;
}
