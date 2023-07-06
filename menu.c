
// Online C Compiler - Build, Compile and Run your C programs online in your favorite browser

#include<stdio.h>
#include<string.h>

int main()
{
    char word[30];
    char vowel[]={'a','e','i','o','u','A','E','I','O','U'};
    int size;
    char operation;
    for(int k=0;k<10000;k++)
    {
    printf("\nEnter a word");
    scanf("%s",word);
    size=strlen(word);
    printf("Choose operation");
    scanf(" %c",&operation);
    switch(operation)
    {
        case 'A':
        {
            int count_vowel=0;
            for(int i=0;i<size;i++)
            for(int j=0;j<10;j++)
            {
                if(word[i]==vowel[j])
                count_vowel++;
            }
            printf("\nThe number of vowels are %d",count_vowel);
            break;
        }
        
        case 'B':
        {
            int count_consonant=0;
            for(int i=0;i<size;i++)
            {int test=0;
            for(int j=0;j<10;j++)
            {
                if(word[i]==vowel[j])
                test=1;
            }
            if(test==0)
            count_consonant++;
            }
            printf("Number of consonants are %d",count_consonant);
            break;
            
        }
        case 'C':
        {
            char alphabet=word[0];
            int count=1;
            int count_max=1;
            for(int i=0;i<size;i++)
            {
                count=1;
               for(int j=i+1;j<size;j++)
            {
                if(word[i]==word[j])
                count++;
            }
            if(count>count_max)
            {
                count_max=count;
                alphabet=word[i];
            }
            
            }
            printf("\nthe most occuring word is '%c' which occurs %d times",alphabet,count_max );
            break;
        }
        
        case 'D':
        {
            char word2[30];
            puts("\nEnter a new word");
            scanf("%s",word2);
            strcat(word,word2);
            printf("\nconcatenated string is '%s'",word);
            break;
            
        }
        
        case 'E':
        {
            return 0;
        }
        
        default:
        printf("\nWrong option entered");
    
    }
    }
    
    
}
