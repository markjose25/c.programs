/*
Mark joseph wanyeri 
computer science 
group A 
CT101/G/26443/25
Date 24/10/25
*/
#include <stdio.h>
#include <stdlib.h>  

int main() {
    int chain[3][5][10];  // 3 branches, 5 floors, 10 rooms each
    int i, j, k;
    int totalOccupied = 0, totalVacant = 0;

    printf("=== Hotel Chain Occupancy (3 Branches) ===\n");

    // Simulate random occupancy (1 or 0)
    for (i = 0; i < 3; i++) {        // branches
        for (j = 0; j < 5; j++) {    // floors
            for (k = 0; k < 10; k++) { // rooms
                chain[i][j][k] = rand() % 2; // random 0 or 1
            }
        }
    }

    // Count occupied and vacant rooms
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            for (k = 0; k < 10; k++) {
                if (chain[i][j][k] == 1)
                    totalOccupied++;
                    else
                    totalVacant++;
            }
        }
    }

    printf("\nAcross all 3 branches:\n");
    printf("Total Occupied Rooms: %d\n", totalOccupied);
    printf("Total Vacant Rooms: %d\n", totalVacant);

    return 0;
}