#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int  main()
{
int dice1, dice2, sum;
int count2=0;
int count3=0;
int count4=0;
int count5=0;
int count6=0;
int count7=0;
int count8=0;
int count9=0;
int count10=0;
int count11=0;
int count12=0;
int count13=0;

int arr[12]= {1,2,3,4,5,6,7,8,9,10,11,12};
printf( "\n *** Roll 2 Dices 1000 times Each & Check the sums *** \n\n ");
printf( "\n ******* Check these out ********* \n\n ");

for(int i=0;i<1000;i++)
{
    dice1=rand()%6+1;
    dice2=rand()%6+1;
    sum=dice1+dice2;
if(sum==2){
    count2++;
}
else if (sum==3)
{
    count3++;
}
else if (sum==4)
{
    count4++;
}
else if (sum==5)
{
    count5++;
}
else if (sum==6)
{
    count6++;
}
else if (sum==7)
{
    count7++;
}
else if (sum==8)
{
    count8++;
}
else if (sum==9)
{
    count9++;
}
else if (sum==10)
{
    count10++;
}
else if (sum==11)
{
    count11++;
}
else
{count12++;
}
}


printf("2 is %d times in 1000 times rolling dice",count2);
printf("\n3 is %d times in 1000 times rolling dice",count3);
printf("\n4 is %d times in 1000 times rolling dice",count4);
printf("\n5 is %d times in 1000 times rolling dice",count5);
printf("\n6 is %d times in 1000 times rolling dice",count6);
printf("\n7 is %d times in 1000 times rolling dice",count7);
printf("\n8 is %d times in 1000 times rolling dice",count8);
printf("\n9 is %d times in 1000 times rolling dice",count9);
printf("\n10 is %d times in 1000 times rolling dice",count10);
printf("\n11 is %d times in 1000 times rolling dice",count11);
printf("\n12 is %d times in 1000 times rolling dice",count12);


return 0;
}
