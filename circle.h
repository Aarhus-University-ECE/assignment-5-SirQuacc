#pragma once
#include <stdbool.h>

typedef struct point {
	int x;
	int y;
} point;
typedef struct circle { // Circle definition, consists of a point (x and y) and r.
	point p; 
	int r;
} circle;
/*add your definition of circle here. You need top call it "circle"*/

void fiveCircles(circle c[]); 
bool circleIsValid(const circle* c);
void translate(circle* c, const point* p);