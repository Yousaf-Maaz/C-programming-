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
        if (x%2!=0 && y%2!=0 && z%2!=0)//if all is odd
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
if(x%2==0 && y%2!=0 && z%2==0)//if 1st and last is even
{
    printf("%d is the greatest odd among them",y);
}
{
    if(x%2!=0 && y%2==0 && z%2==0)//if fisrt is odd the other is even.
{
printf("%d is the greatest odd among them",x);
}
{if(x%2==0 && y%2==0 && z%2!=0)//first and second is even.
printf("%d is the greatest odd among them",z);
}
if(x%2==0 && y%2!=0 && z%2!=0)//second and third is odd
{if(y>=z)
{
printf("%d is the greatest odd among them",y);
}
else{
printf("%d is the greatest odd among them",z);
return 0;
}
}

    if(x%2!=0 && y%2==0 && z%2!=0)//first and third is odd
{if(x>=z)
{
printf("%d is the greatest odd among them",x);
}
else{
printf("%d is the greatest odd among them",z);
return 0;
}

}
if (x%2==0 &&y%2==0 &&z%2==0)//all is even
{printf("none of them is odd");   
return 0;
}
}
}
    

