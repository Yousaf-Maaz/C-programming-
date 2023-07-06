#include<stdio.h>
int main()//main function
{ 
    float a;//for points value
printf("Enter the value:",a);
scanf("%f",&a);
if (a<2)//conditions 
{
    printf(" %.1f Magnitude  earthquake is considered to be a Micro earthquake.\n",a);//.1f is used because we need one value after piont.
}
else if (a<=3 && a!=2.0 )
{
     printf("%.1f Magnitude earthquake is considered to be a Very minor earthquake.",a);    
}
else if (a<4 && a!=3.0 )
{
     printf("%.1f Magnitude earthquake is considered to be a  minor earthquake.",a);   
}
else if (a<5 && a!=4.0 )
{
     printf("%.1f Magnitude earthquake is considered to be a light earthquake.",a);    
}
else if (a<6 && a!=5.0 )
{
printf("%.1f Magnitude earthquake is considered to be a Moderate earthquake.",a);    
}
else if (a<7 && a!=6.0 )
{
     printf("%.1f Magnitude earthquake is considered to be a strong earthquake.",a);
}
else if (a<8 && a!=7.0 )
{
     printf("%.1f Magnitude earthquake is considered to be a Major earthquake.",a);    
}
else if (a<10 && a!=8.0 )
{
     printf("%.1f Magnitude earthquake is considered to be a great earthquake.",a);    
}
else if (a>=10)
{
    printf("%.1f Magnitude earthquake is considered to be a Meteoric earthquake.",a);
}
   return 0;
}