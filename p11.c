#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LENGTH 10000

int main() {
        char filename[100];
        char word[MAX_WORD_LENGTH];
        int count = 0;

        printf("Enter the filename: ");
        scanf("%s", filename);

        FILE *file = fopen(filename, "r");
        if (file == NULL) {
            printf("File not found or unable to open.\n");
            return 1;
        }

        printf("Word count in the file: \n");

        while (fscanf(file, "%s", word) == 1) {
            count++;
            printf("%s\n", word);
        }

        printf("\nTotal words: %d\n", count);

        fclose(file);

        return 0;
}