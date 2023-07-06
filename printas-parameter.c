#include <stdio.h>
void print(int rangeofprint, FILE *fr);
int main()
{
    int rangeofprint;
    int counter = 0;
    printf("Enter the range of printing number:");
    scanf("%d", &rangeofprint);
    FILE *fr = NULL;
    fr = fopen("names.txt", "r");
    if (fr == NULL)
    {
        puts("CANT open file");
        return 1;
    }
    print(rangeofprint,fr);
    if (fclose(fr) != 0)
        puts("couldnt open file");
    return 0;
}
void print(int rangeofprint, FILE *fr)
{
    int counter = 0;
    char name[100];
    while (!feof(fr))
    {
        if (counter > rangeofprint - 1)
            break;
        fgets(name, 100, fr);
        printf("%s", name);
        counter++;
    }
}