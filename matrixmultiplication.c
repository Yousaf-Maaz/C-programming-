#include<stdio.h>

int main()
{

        int matrix1[50][50]; //using two dimension array because of matrix....
        int matrix2[50][50];
        int  Row1;
        int column1; 
        int row2;
        int column2;
      
  
  int Answer[10][10]={0};//we can store the resultant array and intialize is because of it take grabge values.
    printf("Enter the  first matrix size: ");
    scanf("%d %d", &Row1, &column1);

    printf("Enter the second matrix size: ");
    scanf("%d %d",&row2, &column2);

   
    if  (column1!=row2)//if rows and column is not same..
       {
        printf("Matrix cannot be multiplied");
      }

   else 
   {
    printf("\nEnter rows and column of matrix 1:\n");
    for(int i=0; i<Row1;  i++)
        for(int j=0; j<column1;j++)
        {
            scanf("%d", &matrix1[i][j]);
        }

    
    printf("\nEnter rows and column  of matrix 2:\n");
    for(int i=0; i<row2;  i++)
    {
        for(int j=0; j<column2;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    
    printf("Matrix 1   which is given by you  \n ") ;//showing the matrix. on console.
    for(int i=0; i<Row1; i++)
       { for(int j=0; j<column1; j++)
        {
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
       }
        printf("Matrix 2  which is given by you \n ");
    for(int i=0; i<Row1;i++)
       { for(int j=0; j<column1; j++)
        {
            printf("%d\t",matrix2[i][j]);
        }
        printf("\n");
       }
    
    for(int i=0; i<Row1; i++)
      {  for(int j=0; j<column2; j++)
        {
            for(int k=0; k<column1; ++k)
            {
                Answer[i][j]=matrix1[i][k]*matrix2[k][j];//multiplication of the matrix.
            }
        }
      }
    // Displaying the Answer
    printf("\nThe multiplication of the two matrixes is :\n");
    for(int i=0; i<Row1;  i++)
       { for(int j=0; j<column2; ++j)
        {
            printf("%d \t ", Answer[i][j]);
        }
        printf("\n");//for next line writing two numbers..
       }
   }
    return 0;
}