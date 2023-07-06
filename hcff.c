#include <stdio.h>
int hcf(int a,int b);

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d", &a);
 printf("Enter two integers: ");
    scanf("%d", &b);
    int ans=hcf(a,b);
printf("HCF=%d",ans);

    return 0;

}
int hcf(int a,int b)
{
      int min,i;
      if (a<b)
     min=a;
     else
     min==b;
 
    for(i=min; i >=1; --i)
    {
        
        if(a%i==0 && b%i==0)
        {
            int HCF = i;
            break;
        }
        
    }
    return i;
}
