#include<stdio.h>
int duplicate_number(int arr[]);
int main()
{
   int duplicatearray[10];
   for (int  i = 0; i < 10; i++)
   {
    scanf("%d",&i);
   }
   int a=duplicate_number(duplicatearray);
   printf("%d is the repeating number",a);

   




    return 0;
}
int duplicate_number(int duplicatearray[]){
    for (int  i = 0; i < 10; i++)
    {
       for (int  j = i+1; j< 10; i++)
       {
        if(duplicatearray[i]==duplicatearray[j])
        {
            return i;
        }
       }
       
    }
    
    

}