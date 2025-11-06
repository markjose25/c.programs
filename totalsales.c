/*
Mark Joseph wanyeri 
computer science 
group A 
date 3/11/2025
CT101/G/27443/25
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    float amount, total = 0.0;

    fp = fopen("sales.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fscanf(fp, "%f", &amount) == 1) {
        total += amount;
    }

    printf("Total sales for the day: %.2f\n", total);

    fclose(fp);
    printf("File closed successfully.\n");
    return 0;
}