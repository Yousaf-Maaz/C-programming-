#include <stdio.h>
int main()
{

int a, b, *ptr1, *ptr2;
printf("\nPointer : Find the maximum number using pionter :\n");
printf("--------------------------------\n");
ptr1 = &a;
ptr2 = &b;
printf(" Input the first number : ");
scanf("%d", ptr1);
printf(" Input the second number : ");
scanf("%d", ptr2);
if(*ptr1>*ptr2){
printf(" The maximum number is %d\n\n",*ptr1);
}
else
printf("maximum is %d ",*ptr2);
return 0;
}