#include<stdio.h>

int main()
{
    int n = 10;
    int a = 0, b = 1;
    
    // printing the 0th and 1st term
    printf("%d, %d",a,b);
    
    int nextTerm;
    
    // printing the rest of the terms here
    for(int i = 2; i < n; i++){
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        
        printf("%d, ",nextTerm);
    }

    return 0;
}