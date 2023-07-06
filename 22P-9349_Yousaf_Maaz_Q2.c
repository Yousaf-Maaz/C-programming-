#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sorted_array(char arr1[5][10], char arr2[2][10], char r[5][10]);

int main()
{
    char inputFileName[]="22P-9349_questionnumber2_input.txt";
    char outputFileName[]="22P-9349_questionnumber2_output.txt";
    char arr1[5][10] = {"arp", "live", "strong"};
    char arr2[5][10] = {"liveley", "alive", "harp", "sharp", "armstrong"};
    char r[5][10] = {};
    int arr1Index = 0;
    
    
    FILE* fp;
    fp = fopen(inputFileName, "w");
    
    if (fp == NULL) {
        printf("ERROR");
        exit(1);
    }
    while(fscanf(fp,"%s",arr1[arr1Index])==1)
    {
        ++arr1Index;
    }
    fclose(fp);
    
    sorted_array(arr1, arr2, r);
    
    return 0;
}

void sorted_array(char arr1[5][10], char arr2[2][10], char r[5][10]) {
    int currentIndex = 0;
    
    for(int a=0;a<5;a++) {
        if (strlen(arr1[a]) > 0) {
            for (int b=0;b<5;b++) {
                char *p = strstr(arr2[b], arr1[a]);
                if (p != 0) {
                    strcpy(r[currentIndex], arr1[a]);
                    ++currentIndex;
                    break;
                }
            }
        }
    }
    for(int a=0;a<currentIndex;a++) {
        printf("%s\n", r[a]);
    }
}