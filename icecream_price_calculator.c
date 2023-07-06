#include<stdio.h>
int main()
{
    int Total;//for budgets
    int price=0;
    int sum=0;
    int count=0;
    int select=0;//for choice.
    printf("Enter Your Budget:");
    scanf("%d",&Total);
    printf("Select Ice-cream type:\n1.Cone\n2.Cup\n");
    scanf("%d",&select);

    switch (select)
    {
    case 1:
    printf("Select flavour:\n1.Chocolate\n2.Vanila\n3.Strawberry\n4.Oreo\n");
    //we can use both for loop and while loop but here we used while loop
    while (Total>=sum)
    {
        scanf("%d",&select);
        if (select==-1)
        break;
        else if (select==1)
        {
            price=200;
            sum=sum+price;
            count++;
        }

        else if (select==2)
        {
            price=250;
            sum=sum+price;
            count++;
        }
       else if (select==3)
        {
            price=200;
            sum=sum+price;
            count++;
        }
        else if (select==4)
        {
            price=250;
            sum=sum+price;
            count++;
        }
        
    } 
        
    case 2:
    {
     
     while(budget>=sum)
      {
        printf("Choose flavour:\n1.Chocolate\n2.Vanilla\n3.Strawberry\n4.Oreo");
        scanf("%d",&select);
        if(select==-1)
        break;
        
        else if(select==1)
        {
           printf("Choose cup size:\n1.Small\n2.Medium\n3.Large");
           scanf("%d",&select);
           if(select==1)
           {
             price=200;
             sum=sum+price;
             count++;
           }
            
            else if(select==2)
           {
             price=250;
             sum=sum+price;
             count++;
           }
          
             else if(select==3)
           {
             price=300;
             sum=sum+price;
             count++;
           }
           
        else if(select==2)
        {
           printf("Choose cup size:\n1.Small\n2.Medium\n3.Large");
           scanf("%d",&select);
           if(select==1)
           {
             price=250;
             sum=sum+price;
             count++;
           }
            
            else if(select==2)
           {
             price=300;
             sum=sum+price;
             count++;
           }
          
            else if(select==3)
           {
             price=350;
             sum=sum+price;
             count++;
           }
           
        else if(select==3)
        {
           printf("Choose cup size:\n1.Small\n2.Medium\n3.Large");
           scanf("%d",&select);
           if(select==1)
           {
             price=200;
             sum=sum+price;
             count++;
           }
            
            else if(select==2)
           {
             price=250;
             sum=sum+price;
             count++;
           }
          
             else if(select==3)
           {
             price=300;
             sum=sum+price;
             count++;
           }
           
         else if(select==4)
        {
           printf("Choose cup size:\n1.Small\n2.Medium\n3.Large");
           scanf("%d",&select);
           if(select==1)
           {
             price=200;
             sum=sum+price;
             count++;
           }
            
            else if(select==2)
           {
             price=300;
             sum=sum+price;
             count++;
           }
          
             else if(select==3)
           {
             price=400;
             sum=sum+price;
             count++;
           }
        }           
      }
    
    
     }
    }
   printf("\nThe total cost is: %d",sum);
   printf("\nNo. of item purchased:%d",count);
}
    }
}
}