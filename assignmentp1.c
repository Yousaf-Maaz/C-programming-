#include<stdio.h>
float celsiusToFahrenheit(float celsius);//function declaration.
int main()//main function call.
{ 
float a;//Because of integer.
printf("Enter the celsius value\n",a);//show on terminal.
scanf("%f",&a);//take input value 
float fahrenheit;//value may be in points.
fahrenheit=celsiusToFahrenheit(a);//function call.
printf("The value of fahrenheit is %.2f\n",fahrenheit);//shows fahrenheit(.2f is for two decimal point).
return 0;
}
float celsiusToFahrenheit(float celsius)//creating function for C to F.
{
float f;
f =( (celsius*9)/5)+32;//formula for F TO C
return f;
}