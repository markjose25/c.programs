/*
Mark joseph wanyeri 
computer science 
group A 
CT101/G/26443/25
Date 27/10/2025
*/

#include <stdio.h>

int main() {
    int occupancy[5][10];   
    int occupied, vacant;
    int i, j;

    printf("=== Room Occupancy (One Branch) ===\n");

    // Input occupancy 
    for (i = 0; i < 5; i++) {
        printf("\nEnter occupancy for Floor %d (1=occupied, 0=vacant):\n", i + 1);
        for (j = 0; j < 10; j++) {
            printf("  Room %d: ", j + 1);
            scanf("%d", &occupancy[i][j]);
        }
    }

    // Count and display results per floor
    printf("\n=== Occupancy Report ===\n");
    for (i = 0; i < 5; i++) {
        occupied = vacant = 0;
        for (j = 0; j < 10; j++) {
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d -> Occupied: %d | Vacant: %d\n", i + 1, occupied, vacant);
    }

    return 0;
}