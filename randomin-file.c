#include <stdio.h>
#include <stdlib.h>
  

int main()
{
   
    FILE* fp;
  
   
    fp = fopen("Numbers.txt", "w"); 
    int i;
    if (fp == NULL) {
        printf("ERROR");
        exit(1);
    }
  
    for (i = 0; i < 100; i++)//for sorting
     {
  
        
        int numbersgenrator = rand() % 100; 
          for (int i = 0; i < 100; ++i) 
        {
 
            for (int j = i + 1; j < 100; ++j)
            {
 
                if (i > j) 
                {
 
                    int temp =  i;
                    i = j;
                    j = temp;
 
                }
 
            }
 
        }
   
   for (i = 0; i < 100; ++i)//for acending
    fprintf(fp, "%d ", numbersgenrator); 
    }
  


    fclose(fp); 
    printf("numbers generated Yousaf bhai !! ");
    return 0;
}