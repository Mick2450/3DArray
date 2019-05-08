#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void pixelMean(float *r, float *g, float *b);

int main() {
    float image[5][5][3];
    float array[5][5];
    int x, y, xloc, yloc;
    float *r, *g, *b, rMean, gMean, bMean, gScale; //red total etc
    // Don’t change this srand() line!
    srand(0);
    for(y = 0; y < 5; y++) { //Assigns random values between 0 and 1 to array 
        for(x = 0; x < 5; x++) {
        image[x][y][0] = (float)rand()/(float)INT_MAX;
        image[x][y][1] = (float)rand()/(float)INT_MAX;
        image[x][y][2] = (float)rand()/(float)INT_MAX;
        r = &image[x][y][0];
        g = &image[x][y][1];
        b = &image[x][y][2];
        pixelMean(r, g, b);
        }
    }
// ----------------------------------------
// Write your code below this comment block
    for(y = 0; y < 5; y++) { //
        for(x = 0; x < 5; x++) {
           r = image[x][y][0];
           g = image[x][y][1];
           b = image[x][y][2];
           
           
           array[x][y] = ((rT + gT + bT)/3); //stores mean value at each point into a 5x5 array
        }    
    }
    
    // print first two rows
    for(y = 0; y < 2; y++) { //
        for(x = 0; x < 5; x++) {
           xloc = x;
           yloc = y;
           gScale = array[x][y]; 
           printf("\n%d %d: %f %f %f\n", xloc, yloc, gScale, gScale, gScale);
           
        }    
    }
    
// ----------------------------------------
    return 0;
}

void pixelMean(float *r, float *g, float *b){
    xloc = x;
    yloc = y;
    gScale = ((*r + *g + *b)/3)
}
