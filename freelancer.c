#include<stdio.h>
int main()
{
    int n_fixed; //number of fixed price projects
    float price_fixed; //price of fixed price projects
    float tot1=0;
    float tot2=0;
    float tot;
    int n_hrly;
    float n_hr;
    float rate;
    printf("\nEnter number of fixed projects done\n");
    scanf("%d",&n_fixed);
    for(int i=1;i<=n_fixed;i++)
    {
        printf("\nEnter price of project %d\n",i);
        scanf("%f",&price_fixed);
       tot1=tot1+price_fixed;  
    }
    
    printf("\nEnter hourly rate\n");
    scanf("%f",&rate);

    printf("\nEnter number of hourly priced projects\n");
    scanf("%d",&n_hrly);
    
    
    if(n_hrly!=0)
    {
    for(int i=1;i<=n_hrly;i++)
    {
        printf("\nEnter number of hourse worked on project %d\n",i);
        scanf("%d",&n_hr);
        tot2=tot2+(rate*n_hr);
    }
    }

    tot=tot1+tot2;
    printf("\nThe total amount earned is %.2f\n",tot);


}