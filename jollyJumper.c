#include "jollyjumper.h"
#include <stdbool.h>
#include <stdlib.h>
#include <malloc.h>
#include <assert.h>
/*
A function that returns 1 (true) if input is a jolly jumper and returns 0 if not.
*/


int isJollyJumber(const int seq[], int size) {
/*post: answer to exercise 7.a*/
    int verifier = 0; // Declare variable to verify it's a jolly jumper.
    assert(size > 0); // Array size must be greater than 0.
    if(size == 1) return 1; // Any "seq" of just 1 number is a jolly jumper

    bool diffs_found[size+1]; // Bool array to keep track of what diff values have been found
    for(int i = 0; i<size; i++){ // Set all slots in array as false for starters.
        diffs_found[i] = false;
    }
    for(int i2 = 0; i2 < size; i2++){ // Go through the input array, and evaluate the absolute difference between the numbers.
        if(abs(seq[i2+1] - seq[i2]) < size && diffs_found[abs(seq[i2+1] - seq[i2])] == false) {
            diffs_found[abs(seq[i2+1] - seq[i2])] = true; //If this difference hasn't already been set, but is under the size, then indicate this has now been found
        }
        else {
            return 0;
        }
    }
    for(int i3 = 1; i3 <= size; i3++){ // Check/verify the diffs_found array, to have all values 1 (0 here) -> n-1
        if(diffs_found[i3] == true){
            verifier++;
        }
    }
    if(verifier == size){
        return 1;
    }
}

