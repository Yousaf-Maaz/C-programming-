#include <stdio.h>
void print(int limit, FILE *fr);
int main()
{
    int limit;
    int line = 0;
    printf("Enter the number till you want to print:");
    scanf("%d", &limit);
    FILE *fr = NULL;
    fr = fopen("names.txt", "r");
    if (fr == NULL)
    {
        puts("CANT open file");
        return 1;
    }
    print(limit,fr);
    if (fclose(fr) != 0)
        puts("couldnt open file");
    return 0;
}
void print(int limit, FILE *fr)
{
    int line = 0;
    char name[100];
    while (!feof(fr))
    {
        if (line > limit - 1)
            break;
        fgets(name, 100, fr);
        printf("%s", name);
        line++;
    }
}