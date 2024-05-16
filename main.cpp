#include <iostream>
#include "file.h"

void menu(void){
    printf("1. Enter the values into the file\n");
    printf("2. Show file content\n");
    printf("3. Add new values into end of the file\n");
    printf("4. Add new values into file\n");
    printf("0. EXIT\n");
    printf("Select an option:\n");
}




int main() {

    int option = 0;
    int max;
    int min;
    float avg;

    do{
        menu();
        scanf("%d",&option);
        switch (option){
            case 0:
                break;
            case 1:
                printf("1. Enter the values into the file\n");
                enterValue();
                break;
            case 2:
                printf("2. Show file content\n");
                printArray();
                break;
            case 3:
                printf("3. Add new values into end of the file\n");
                addValueEnd();
                break;
            default:
                printf("choose the right option");

        }
    }while (option !=0);

    printf("The End");

    return 0;
}