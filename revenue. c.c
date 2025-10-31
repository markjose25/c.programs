/*
mark joseph wanyeri njogu
computer science 
group A
CT101/G/26443/25
date 28/10/25
*/
#include <stdio.h>

int main() {
    float revenue[7];     
    float total = 0, average;
    int i;

    printf("=== Weekly Revenue Tracker ===\n");
    for (i = 0; i < 7; i++) {
    
    // prompt the user to enter revenue for day
          printf("\n Enter revenue for day %d:\n ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;

    printf("\nTotal Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    return 0;
}