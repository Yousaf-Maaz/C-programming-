#include <stdio.h>

int combination(int n);

int main()
{
	int n,r,ncr;
 
  	printf("Enter a number n\n");
  	scanf("%d",&n);
 	printf("Enter a number r\n");
  	scanf("%d",&r);
  	ncr=combination(n)/(combination(r)*combination(n-r));
    printf("Value of %dC%d = %d\n",n,r,ncr);
}

int combination(int n)
{
    int i,x=1;
    for(i=1;i<=n;i++)
    {
        x=x*i;
    }
    return x;
}