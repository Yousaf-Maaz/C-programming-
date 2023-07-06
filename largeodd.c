#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number \nx:",x);
    scanf("%d",&x);

    int y;
    printf("Enter the second number \ny:",y);
    scanf("%d",&y);

    int z;
    printf("Enter the third number \nz:",z);
    scanf("%d",&z);
    

    if (x%2!=0 && y%2!=0 && z%2!=0)
    {if (x>y && x>z)
{

printf("%d is the greatest odd among them\n",x);

}
else if(y>x && y>z)
{

printf("%d is the greatest odd among them\n",y);
}
else
{

    printf("%d is the greatest odd among them\n",z);
}
return 0;
    }

if(x%2!=0 && y%2==0 && z%2==0)
{if(x>=y)
{
    printf("%d is the greatest odd among them",x);

}
else{
        printf("%d is the greatest odd among them",y);
}
return 0;
}


if(x%2!=0 && y%2==0 && z%2!=0)
{if(x>=z)
{
printf("%d is the greatest odd among them",x);
}
else{
printf("%d is the greatest odd among them",z);
return 0;
}
if(x%2==0 && y%2!=0 && z%2!=0)
{if(y>=z)
{
printf("%d is the greatest odd among them",y);
}
else{
printf("%d is the greatest odd among them",z);
return 0;
}
}
}
if (x%2==0 &&y%2==0 &&z%2==0){
printf("none of them is odd");   
return 0;
}

}
    


