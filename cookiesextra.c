 int a;
     printf("Enter the total number of cookies:",a);
     scanf("%d",&a);

       int b;
     printf("Enter the  number of cookies in the box:",b);
     scanf("%d",&b);
 int c;
     printf("Enter the total number of cookie boxes in containeer:",c);
     scanf("%d",&c);



#include<stdio.h>
int triangles(int a,int b,int c);

int main()
{
int x;
printf("input length of the triangle sides\nx:",x);
scanf("%d",&x);
int y;
printf("y:",y);
scanf("%d",&y);
int z;
printf("z:",z);
scanf("%d",&z);
triangles(x,y,z);

return 0;
}
int triangles(int a,int b,int c)
{
if(a==b  && b==c)
{
printf("equalitral triangle");
}
else if(a==b || a==c || b==c)   
{  
printf(" isosceles triangle");
}
else{
printf("scalane triangle");
}
}




    int result1,result2,result3;
    result1=x%2;
     result2=y%2;
     result3=z%2;
     int large;


 
if (result1!=0,result2!=0,result3!=0)
{
   printf("none of them is odd"); 
}

   
else if (x>y && x>z)
{
large = x;
printf("%d is the greatest odd among them\n",large);

}
else if(y>x && y>z)
{
large = y;
printf("%d is the greatest odd among them\n",large);
}
else if(z>x && z>y)
{
    large =z;
    printf("%d is the greatest odd among them\n",large);
}

 

    return 0;
}


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

if(x%2==0 && y%2!=0 && z%2==0)
//{if(x>=y)
{
    printf("%d is the greatest odd among them",y);

}
/*else{
        printf("%d is the greatest odd among them",y);
}
return 0;
}*/


{
    if(x%2!=0 && y%2==0 && z%2==0)
//{if(x>=z)
{
printf("%d is the greatest odd among them",x);
}
/*else{
printf("%d is the greatest odd among them",z);
return 0;
}*/
if(x%2==0 && y%2==0 && z%2!=0)
printf("%d is the greatest odd among them",z);
}
if (x%2==0 &&y%2==0 &&z%2==0){
printf("none of them is odd");   
return 0;
}

}
    


