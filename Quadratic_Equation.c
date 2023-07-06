#include<stdio.h>
#include<math.h>
const int i=-1;
int main()
{
  int a;//for coffients of ax^2
  int b;//for coffients of bx
  int c;//for coffients of c
  int R1;//root 1
  int R2;//root 2
  int  disc;
  printf("Enter a:");
  scanf("%d",&a);

  printf("Enter b:");
  scanf("%d",&b);

  printf("Enter c:");
  scanf("%d",&c);

if(a<0 && b<0 && c<0 )
printf("The values must be greater than zero");
else if(a==0 && b==0 & c==0)
printf("The value can't be zero");
else
{
  int Discriminator;//discriminat.
        int R1;
        int R2;
        
Discriminator=(b*b)-4*a*c;
if(Discriminator<0)
{
        R1=(-b+(Discriminator)*1/2/2*a);
        R2=(-b-(Discriminator)*1/2/2*a);
        printf("%d,%d the roots are real and unequal",R1,R2);
        }
        else if (Discriminator>0){
        R1=(-b+i*(Discriminator)*1/2/2*a);
        R2=(-b-i*(Discriminator)*1/2/2*a);
        printf("%d,%d the roots are imaginary",R1,R2);
        }
        else if(Discriminator==0){
        R1=R2=-b/(2*a);
        printf("%d,%d the roots are real",R1,R2);
        }
}
    return 0;
}