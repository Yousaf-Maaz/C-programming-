#include <stdio.h>
  int largest_reversed_number_of_product3digits( int n);//function declare 
int main()
{
   int i, j, max = 0;
  for (i = 100; i <= 999; i++)//i is start from 100 because the 3 digit number is between 100-1000 
  {
    for (j = 100; j <= 999; j++) {
       int p = i*j;//to the product of the number 
      if (largest_reversed_number_of_product3digits(p) && p > max) {
        max = p;
      }
    }
  }
  printf("The Largest palindrome number 3 digit product  is:%d",max);
  
  return 0;
}
int largest_reversed_number_of_product3digits( int n)
{
   int reversed_num = 0, t = n;
  while (t) {
    reversed_num = 10*reversed_num + (t % 10);//%10 is reversed the number for one place back
    t /= 10;//dividing the number will reversed the number full...
  }
  return reversed_num == n;
}