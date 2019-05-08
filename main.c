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
    for(y = 0; y < 2; y++) { //Assigns random values between 0 and 1 to array 
        for(x = 0; x < 5; x++) {
            image[x][y][0] = (float)rand()/(float)INT_MAX;
            image[x][y][1] = (float)rand()/(float)INT_MAX;
            image[x][y][2] = (float)rand()/(float)INT_MAX;
            r = &image[x][y][0];
            g = &image[x][y][1];
            b = &image[x][y][2];
            pixelMean(r, g, b);
            xloc = x;
            yloc = y;
            printf("%d %d: %f %f %f\n", xloc, yloc, image[x][y][0], image[x][y][1], image[x][y][2]);

        }
    }
   
// ----------------------------------------
// Write your code below this comment block

// ----------------------------------------
    return 0;
}

void pixelMean(float *r, float *g, float *b){
    float gScale;
    gScale = ((*r + *g + *b)/3);
    *r = gScale;
    *g = gScale;
    *b = gScale;
}
