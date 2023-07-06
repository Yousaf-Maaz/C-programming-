// #include<stdio.h>
// int main()
// {
//     int a,i;
//     int sum;
//     printf("Enter a number :",a);
//     scanf(" %d",&a);
   
//     for (i=1;i<a;i++)
//     {
//         int t;
//         t=a%i;
//      if(t==0){
//      //printf("factor are %d\n",i);}
     
//      sum=i+sum;
//      printf("%d",sum);
      
    
       
//     }
    
// }
// return  0;


// }
#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factors of %d are: ", num);
    for (i = 1; i <= num; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}