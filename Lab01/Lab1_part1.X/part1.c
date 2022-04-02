// **** Include libraries here ****
// Standard libraries
#include <stdio.h>
#include <stdlib.h>

//Class specific libraries
#include "BOARD.h"


// User libraries

int main(void) {
    BOARD_Init();
    unsigned char vals[] = {rand(), rand(), rand(), rand(), rand()};
    int valsToBeSorted[] = {vals[0], vals[1], vals[2], vals[3], vals[4]};

    // Sort the array in place.
    /* Values of the elements in part1:   valsToBeSorted[0]  = 116;  valsToBeSorted[1] = 5;  valsToBeSorted[2] = 42;  valsToBeSorted[3] = 47;  valsToBeSorted[4]  = 250
     * Values of the elements in part1:   valsToBeSorted[0]  = 116;  valsToBeSorted[1] = 5;  valsToBeSorted[2] = 42;  valsToBeSorted[3] = 47;  valsToBeSorted[4]  = 250
     * Values of the elements in part1:   valsToBeSorted[0]  = 5;  valsToBeSorted[1] = 116;  valsToBeSorted[2] = 42;  valsToBeSorted[3] = 47;  valsToBeSorted[4]  = 250
     * Values of the elements in part1:   valsToBeSorted[0]  = 5;  valsToBeSorted[1] = 42;  valsToBeSorted[2] = 116;  valsToBeSorted[3] = 47;  valsToBeSorted[4]  = 250
     * Values of the elements in part1:   valsToBeSorted[0]  = 5;  valsToBeSorted[1] = 42;  valsToBeSorted[2] = 47;  valsToBeSorted[3] = 116;  valsToBeSorted[4]  = 250 */
    int i, j;
    for (i = 0; i < 5; i++) {
        int aTemp = valsToBeSorted[i];
        for (j = i - 1; j >= 0; j--) {
            if (valsToBeSorted[j] <= aTemp)
                break;
            valsToBeSorted[j + 1] = valsToBeSorted[j];
        }
        valsToBeSorted [j + 1] = aTemp;
    }

    // Print out the array
    printf("[");
    for (i = 0; i < 4; i++) {
        printf("%d, ", valsToBeSorted[i]);
    }
    printf("%d]\n", valsToBeSorted[i]);

    /*
     * Returning from main() is bad form in embedded environments. So we
     * sit and spin.
     */
    while (1);
}
