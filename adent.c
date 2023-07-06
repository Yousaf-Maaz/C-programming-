#include<stdio.h>
int calcattendance(int classesattended,int classestotal);
int main()
{
int x;
int y;
int atten;
printf("Enter total classes scheduled:");
scanf("%d",&x);
printf("Enter total classes attended:");
scanf("%d",&y);

printf("%d",calcattendance(x,y));
return 0;
}
int calcattendance(int classesattended,int classestotal)
{
    int percent=(classestotal*100)/classesattended;
    printf("your addentence is %d%%\n",percent);
if(percent>=80)
{
    printf("You are allowed to sit in exam\n");

}
// else if(percent==80)
// {

//   printf("You are  allowed to sit in exam\n");   
// }
else{
      printf("You are not  allowed to sit in exam\n");  

}

}