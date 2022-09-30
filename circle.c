
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>
#include "circle.h"

void fiveCircles(circle c[]) { // Create 5 circles
for(int i = 0; i < 5; i++){ //Input i from 0->4 as values for coordinates and radius of 5 circles. first is invalid rest are valid.
	c[i].p.x = i;
	c[i].p.y = i;
	c[i].r = i;
}
/*post: returns an array with five circles - solution to 6.b*/
}

bool circleIsValid(const circle *c) {
	if(c->r > 0){ // If what c points to's radius r is greater than 0, circle is valid and returns true
		return true;
	}
	return false;
/*post: answer to exercise 6.c*/
}

void translate(circle *c, const point *p) {
	c->p.x += p->x; // Edit the value of what c points to's x-value and y-value by what p points to's values.
	c->p.y += p->y; // I.e add the value of p's x and y to the values of c's own p's x and y values.
/*ansver to exercise 6.d*/
}