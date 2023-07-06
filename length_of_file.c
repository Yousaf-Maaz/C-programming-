#include <stdio.h>
#include <string.h>

int main()
{
int a;
char length1[10];
char filename[]="Names.txt";
FILE *fp = fopen(filename,"r");
if(fp==NULL)
{
printf("Could not open file for reading\n");
return 1;
}
printf("file exists man\n");
while (fscanf(fp,"%.4s",&length1)==1)
{
printf("%s\n",length1);
a = a+strlen(length1);
}
printf("Total length is %d",a);
return 0;
}
