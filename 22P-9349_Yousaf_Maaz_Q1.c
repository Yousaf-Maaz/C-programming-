
  #include <stdio.h>
  #include <string.h>
  #define MAX 256

  int main() {
        FILE *fp1, *fp2;
        int key, val, ch, i = 0;
        char filename[MAX], temp[] = "22P-9349_questionnumber1_output.txt";

        /* get the file name from the user */
        printf("Enter your file name:");
        scanf("%s", filename);

        /* open the given file in read mode */
        fp1 = fopen(filename, "w");

        /* error handling */
        if (!fp1) {
                printf("Unable to open the input file!!\n");
                return 0;
        }

        /* open the temporary file in write mode */
        fp2 = fopen(temp, "w");

        /* error handling */
        if (!fp2) {
                printf("Unable to open the temporary file!!\n");
                return 0;
        }

        /* get the key from the user to create cipher */
        printf("Enter the key to create cipher text:");
        scanf("%d", &key);

        /* converting plain text to cipher text */
        while ((ch = fgetc(fp1)) != EOF) {
                /* adding key to the ascii value of the fetched char */
                val = ch + key;
                fprintf(fp2, "%d ", val);
                i++;

                if (i % 10 == 0) {
                        fprintf(fp2, "\n");
                }
        }

        /* closing all opened files */
        fclose(fp1);
        fclose(fp2);

        /* open the file containint cipher text in read mode */
        fp2 = fopen(temp, "r");

        /* printing the cipher text */
        printf("\nCipher text for the given plain text:\n");
        while (!feof(fp2)) {
                fscanf(fp2, "%d", &ch);
                if (!feof(fp2)) {
                        printf("%c", ch);
                }
        }

        /* moving the file pointer to the start of file */
        rewind(fp2);

        /*
         * converting the cipher text to plain
         * text and printing it to console
         */
        printf("\n\nConverting the cipher text to plain text:\n");
        while (!feof(fp2)) {
                fscanf(fp2, "%d", &ch);
                if (!feof(fp2)) {
                        val = ch - key;
                        printf("%c", val);
                }
        }
        printf("\n");

        /* close all opened files */
        fclose(fp2);
        return 0;
        printf("\n");
  }

