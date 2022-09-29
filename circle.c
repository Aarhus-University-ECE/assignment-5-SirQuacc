
#include <malloc.h>
#include <stdlib.h>
#include <stdbool.h>
#include "circle.h"



void fiveCircles(circle c[]) { // Create 5 circles
for(int i = 0; i < 5; i++){
	c[i].p.x = i;
	c[i].p.y = i;
	c[i].r = i;
}
/*post: returns an array with five circles - solution to 6.b*/
}

bool circleIsValid(const circle *c) {
/*post: answer to exercise 6.c*/
	if(c->r > 0){
		return true;
	}
	return false;

}

void translate(circle *c, const point *p) {
	c->p.x += p->x;
	c->p.y += p->y;
/*ansver to exercise 6.d*/
}