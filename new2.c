#include<stdio.h>
int cup(int budget);
int cone(int budget);
int main()
{
    int Total,select;
printf("Enter Your Budget :");
scanf("%d",&Total);
if(Total>=200)
{
printf("\nChose Ice Cream Between 1 and 2.\n1)Cone\t\t2)Cup.\n");
scanf("%d",&select);
if(select==1)
cone(Total);
else if(select==2)
cup(Total);
else
printf("\n-1\n");
}
else
printf("-1");
return 0;    
}
int cone(int budget)
{
    int Chocalate=200;
    int vanila=250;
    int stawbery=200;
    int or=250;
    int oreo=200;
    int count=0;
    while (oreo<=budget)
    {
    	if(budget>199&&budget<250)
    	{
    	int c;
		printf("\nChose Ice Cream\n1-Choclate %dPKR\n2-Strawberry %dPKR\n",Chocalate,stawbery);
		scanf("%d",&c);
		if(c==1)
		budget=budget-Chocalate;
		else if(c==2)
		budget=budget-stawbery;
		else
		printf("\ninvalid opertator Try again"); 
	}
    if(budget>250)
		{
			int c;
		printf("\nChose The Flavour between 1 and 4.\n1)Choclate Cone :%dPKR\t\t2)Vanila Cone :%dPKR\n3)Strawberry Cone :%dPKR\t4)Oreo Cone :%dPKR.\n",Chocalate,vanila,stawbery,or);
		scanf("%d",&c);
		    switch (c)
    {
    case 1:
    budget=budget-Chocalate;
    break;
    case 2:
    budget=budget-vanila;
    break;
    case 3:
    budget=budget-stawbery;
    break;
    case 4:
    budget=budget-or;
    break;
    default:
    printf("\nInvalid Try again\n");
     break;
    }
}
	count++;
    }
    printf("\nYou Have Purchased %d Ice Creams \nSorry Your Budget is Out.",count);
}

int cup(int budget)
{
    int sm=200;
    int sm1=250;
    int md=250;
    int md1=300;
    int lg=300;
    int lg1=350;
    int lg2=400;
    int oreo=200;
    int co=0;
    int Chocalate=0;
    while(budget>oreo)
    {
    if(budget>199&&budget<250)
    {
	  printf("\nChose Flavour and size avalibe only small in this budget.\n1-Choclate Small %dPKR \n2-Strawberry Small %dPKR\n",sm,sm);
	  scanf("%d",&Chocalate);
    if(Chocalate==1)
    budget=budget-sm;
	else if(Chocalate==2)
	budget=budget-sm;
	else
	printf("\nInvalid operator");	
}
    else if(budget>249&&budget<300)
    {
    printf("\nChose ice cream. size avalible in this budget is small only.\n1-Choclate Small %dPKR \n2-Vanila Small %dPKR\n3-Strawberry Small %dPKR \n4-Oreo Small %dPKR \n",sm,sm1,sm,sm1);
	scanf("%d",&Chocalate);
    if(Chocalate==1)
    budget=budget-sm;
	else if(Chocalate==2)
	budget=budget-sm1;
	else if(Chocalate==3)
    budget=budget-sm;
	else if(Chocalate==4)
	budget=budget-sm1;
	else
	printf("\nInvalid operator");
	}
    else if(budget>299&&budget<350)
    {
    	printf("\nChose ice cream size.\n1- Small\n2-Medium\n3-Large\n");
	scanf("%d",&Chocalate);
    if(Chocalate==1)
    {
    	printf("\nChose Flavour\n1-Choclate %dPKR\n2-Vanila %dPKR\n3-Strawberry %dPKR\n4-Oreo %dPKR\n",sm,sm1,sm,sm1);
    	scanf("%d",&Chocalate);
    	if(Chocalate==1)
    	budget=budget-sm;
    	else if(Chocalate==2)
    	budget=budget-sm1;
    	else if(Chocalate==3)
    	budget=budget-sm;
    	else if(Chocalate==4)
    	budget=budget-sm1;
    	else
    	printf("\nInvalid operator");
    	}
	else if(Chocalate==2)
	{
		printf("\nChose Flavour\n1-Choclate %dPKR\n2-Strawberry %dPKR\n",md,md);
    	scanf("%d",&Chocalate);
    	if(Chocalate==1)
    	budget=budget-md;
    	else if(Chocalate==2)
    	budget=budget-md;
    	else
    	printf("\nInvalid operator");
	}
	else
	printf("\nInvalid operator");
	}
	else if(budget>349&&budget<400)
    {
    	printf("\nChose ice cream size.\n1- Small\n2-Medium\n3-Large\n");
	scanf("%d",&Chocalate);
    if(Chocalate==1)
    {
    	printf("\nChose Flavour\n1-Choclate %dPKR\n2-Vanila %dPKR\n3-Strawberry %dPKR\n4-Oreo %dPKR\n",sm,sm1,sm,sm1);
    	scanf("%d",&Chocalate);
    	if(Chocalate==1)
    	budget=budget-sm;
    	else if(Chocalate==2)
    	budget=budget-sm1;
    	else if(Chocalate==3)
    	budget=budget-sm;
    	else if(Chocalate==4)
    	budget=budget-sm1;
    	else
    	printf("\nInvalid operator");
    	}
	else if(Chocalate==2)
	{
		printf("\nChose Flavour\n1-Choclate %dPKR\n2-Vanila %dPKR\n3-Strawberry %dPKR\n4-Oreo %dPKR\n",md,md1,md,md1);
    	scanf("%d",&Chocalate);
    	if(Chocalate==1)
    	budget=budget-md;
    	else if(Chocalate==2)
    	budget=budget-md1;
    	else if(Chocalate==3)
    	budget=budget-md;
    	else if(Chocalate==4)
    	budget=budget-md1;
    	else
    	printf("\nInvalid operator");
	}
		else if(Chocalate==3)
	{
	
		printf("\nChose Flavour\n1-Choclate %dPKR\n2-Vanila %dPKR\n3-Strawberry %dPKR\n",lg,lg1,lg);
    	scanf("%d",&Chocalate);
    	if(Chocalate==1)
    	budget=budget-lg;
    	else if(Chocalate==2)
    	budget=budget-lg1;
    	else if(Chocalate==3)
    	budget=budget-lg;
    	else
    	printf("\nInvalid operator");
	}
}
    else if(budget>399)
    {
    	printf("\nChose ice cream size.\n1- Small\n2-Medium\n3-Large\n");
	scanf("%d",&Chocalate);
    if(Chocalate==1)
    {
    	printf("\nChose Flavour\n1-Choclate %dPKR\n2-Vanila %dPKR\n3-Strawberry %dPKR\n4-Oreo %dPKR\n",sm,sm1,sm,sm1);
    	scanf("%d",&Chocalate);
    	if(Chocalate==1)
    	budget=budget-sm;
    	else if(Chocalate==2)
    	budget=budget-sm1;
    	else if(Chocalate==3)
    	budget=budget-sm;
    	else if(Chocalate==4)
    	budget=budget-sm1;
    	else
    	printf("\nInvalid operator");
    	}
	else if(Chocalate==2)
	{
		printf("\nChose Flavour\n1-Choclate %dPKR\n2-Vanila %dPKR\n3-Strawberry %dPKR\n4-Oreo %dPKR\n",md,md1,md,md1);
    	scanf("%d",&Chocalate);
    	if(Chocalate==1)
    	budget=budget-md;
    	else if(Chocalate==2)
    	budget=budget-md1;
    	else if(Chocalate==3)
    	budget=budget-md;
    	else if(Chocalate==4)
    	budget=budget-md1;
    	else
    	printf("\nInvalid operator");
	}
	else if(Chocalate==3)
	{
	
		printf("\nChose Flavour\n1-Choclate %dPKR\n2-Vanila %dPKR\n3-Strawberry %dPKR\n4-Oreo %dPKR\n",lg,lg1,lg,lg2);
    	scanf("%d",&Chocalate);
    	if(Chocalate==1)
    	budget=budget-lg;
    	else if(Chocalate==2)
    	budget=budget-lg1;
    	else if(Chocalate==3)
    	budget=budget-lg;
    	else if(Chocalate==4)
    	budget=budget-lg2;	
    	else
    	printf("\nInvalid operator\n");
	}
	}
    {
    	
	}
	co++;
	}
  
    printf("\nYou Have Purchased %d Ice Creams\nSorry Your Limit Exceed",co);
}