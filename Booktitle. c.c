/*
Mark Joseph wanyeri 
CT101/G/26443/25
computer science 
group A
date 3/11/2025
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char title[100];

    fp = fopen("borrowed_books.txt", "a"); // open file in append mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title (type 'end' to stop):\n");
    while (1) {
        fgets(title, sizeof(title), stdin);

        if (title[0] == 'e' && title[1] == 'n' && title[2] == 'd')
            break;

        fprintf(fp, "%s", title); // store title in file
        printf("Book title successfully stored.\n");
    }

    fclose(fp);
    printf("All titles saved successfully.\n");
    return 0;
}