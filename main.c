#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    float image[5][5][3];
    int x, y;
    float rT = 0, gT = 0, bT = 0, rTav, gTav, bTav;
    // Don’t change this srand() line!
    srand(0);
    for(y = 0; y < 5; y++) { //Assigns random values between 0 and 1 to array 
        for(x = 0; x < 5; x++) {
        image[x][y][0] = (float)rand()/(float)INT_MAX;
        image[x][y][1] = (float)rand()/(float)INT_MAX;
        image[x][y][2] = (float)rand()/(float)INT_MAX;
        }
    }
// ----------------------------------------
// Write your code below this comment block
    for(y = 0; y < 5; y++) { //
        for(x = 0; x < 5; x++) {
           rT += image[x][y][0];
           gT += image[x][y][1];
           bT += image[x][y][2];
        }    
    }
    rTav = rT / (5*5*3);
    gTav = gT / (5*5*3);
    bTav = bT / (5*5*3);
    printf("\nMean value of red: %f\nMean value of green: %f\nMean value of blue: %f\n", rTav, gTav, bTav);

// ----------------------------------------
    return 0;
}

