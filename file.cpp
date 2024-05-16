#include <iostream>
#include "file.h"
#include <stdlib.h>
FILE * fptr;

void  enterValue(){
    int value;
    fptr=fopen("array.txt","w");
    if (fptr==0){
        printf("ERROR!\n");
        exit(1);
    }
    fclose(fptr);
    for(int i=0;i<10;i++) {
        fptr = fopen("array.txt", "a");
        if (fptr == 0) {
            printf("ERROR!\n");
            exit(1);
        }
        printf("\nADDING %d\n", i);
        scanf("%d",&value);
        fprintf(fptr,"%d\n",value);
        fclose(fptr);
    }
}
void printArray(){
    char fileLine[100];
    fptr = fopen("array.txt", "r");
    if (fptr != 0)
    {
        while (!feof(fptr))
        {
            fgets(fileLine, 100, fptr);
            if (!feof(fptr))
            {
                puts(fileLine);
            }
        }
    }
    else
    {
        printf("\nERROR!\n");
    }
    fclose(fptr);
}
void addValueEnd() {
    int lines;
    int value;
    printf("How many values?\n");
    scanf("%d", &lines);
    for (int i = 0; i < lines; i++) {
        fptr = fopen("array.txt", "a");
        if (fptr == 0) {
            printf("ERROR!\n");
            exit(1);
        }
        int j = 1 + i;
        printf("ADDING %d\n", j);
        scanf("%d", &value);
        fprintf(fptr, "%d\n", value);
        fclose(fptr);
    }
}
