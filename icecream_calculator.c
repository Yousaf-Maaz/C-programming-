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

if(Total>=200)
    switch (select)//switch starts
    {
    case 1:
    printf("Select flavour:\n1.Chocolate-200pkr\n2.Vanila-250pkr\n3.Strawberry-200pkr\n4.Oreo-250pkr1\n");
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
     
     while(Total>=sum)
      {
        printf("Choose flavour:\n1.Chocolate-200pkr\n2.Vanilla-250pkr\n3.Strawberry-200pkr\n4.Oreo-200pkr");
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
return 0;
}