/*
mark joseph wanyeri 
Reg.CT1O1/G/27443/25
COMPUTER SCIENCE 
GROUP A 
DATE 3/11/2025
*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int reg_no;
    float total_marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Name\t\tReg_No\tTotal Marks\n");
    printf("-------------------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("%-15s\t%d\t%.2f\n", s.name, s.reg_no, s.total_marks);
    }

    fclose(fp);
    printf("\nAll records displayed successfully.\n");
    return 0;
}