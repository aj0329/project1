#include "wish.h"

int main(int argc, char  **argv) {

    if (argc > 1) {
        FILE *fp = fopen(argv[1], "r");
        if (fp == NULL) {
            printf("Error: file does not exist");
            exit(1);
        }
        char *buf;
        int currline = 1;

        while (!feof(fp)) {
            fgets(buf, 255, fp);
            if (feof(fp)) {
                break;
            }
            printf("Line %d: %s", currline, buf);
            currline++;

        }
        fclose(fp);
        exit(1);
        printf("\n");
    }

    //printf("Welcome to wish shell\n");
    int currline = 1;
    char command[50];
    while(1) {

        printf("wish> ");
        fgets(command, sizeof(command), stdin);
        printf("Line %d: %s",currline, command);
        currline++;
    }
        return 0;
}

