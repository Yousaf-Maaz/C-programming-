#include <stdio.h>
#include <string.h>
int main()
{	
	char num[100];
	char num2;
 char filename1[]="Names.txt";
 char filename2[]="subject .txt";
 FILE *fp = fopen(filename1,"r");
 FILE *fp2 = fopen(filename2,"w");
 strcpy(fp,fp2);
 if(fp==NULL || fp2==NULL)
 {
  printf("Could not open file for reading\n");
  return 1;
 }
 printf("file exists:\n");
 num2=fgetc(fp);
 while (num2!=EOF)
 {
 	fputc(num2,fp2);
    num2=fgetc(fp);
    char name[]="Programing fundementals,calculas,English composition";
    fprintf(fp2,"%s",filename2);
 }
 printf("Cpntent is copied\n");
 fclose(fp);
 fclose(fp2);
}

