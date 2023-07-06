#include<stdio.h>
#include<string.h>
int main()
{
    char alphabet[]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char word[30];
    int select=0;
    printf("\nEnter a words you want to encrypt or decrypt::");
    scanf("%s",word);
    printf("\nSelect 1 to encrypt or 2 to decrypt:::");
    scanf("%d",&select);

    if (select==1)
    {
    int size=strlen(word);
    char changes[size];
    for(int i=0;i<size;i++)
        for(int j=0;j<52;j++)
        {
            if(word[i]==alphabet[j])
            changes[i]=alphabet[j+3];
        }
        printf("%s",changes);
    }
    else if (select==2)
    {
     int size=strlen(word);
    char changes[size];
    for(int i=0;i<size;i++)
        for(int j=0;j<26;j++)
        {
            if(word[i]==alphabet[j])
            changes[i]=alphabet[j-3];
        }
        printf("%s",changes);
            
    }
    
    
    
    return 0;
}
