#include <stdio.h>
#include <malloc.h>
#include "circle.h"
#include "jollyjumper.h"

void printCircle(circle c) {
	printf("p.x: %d, p.y: %d, r: %d\n", c.p.x, c.p.y, c.r);
}

int main(void) {
	/*testing circles - make sure that you know how it works and what it is supposed to print out*/
	circle c[5]; // Declare array of 5 circles
	fiveCircles(c); // Call function to give values to these 5 circles.
	for (int i = 0; i < 5; i++) {
		printCircle(c[i]);
	}
	point p;
	p.x = 2;
	p.y = 2;
	translate(&c[1], &p); //Translate the circle by the vector stored as point p
	printCircle(c[1]);
	printf("isValid: %d\n", circleIsValid(&c[1]));

	/*answer to exercise 7.b*/
	int n; /*number of numbers to read*/
	printf("Input the length of the Jolly sequence: ");
	scanf("%d", &n);
	assert(n < 100); // Don't want that long sequences.
	/*readin n and check that is is OK*/
	int *numbers = malloc(sizeof(int) * n); // Weird way to create an array of specified size n, storing input numbers.
	/*readin the n numbers in the array numbers*/
	printf("Please insert your sequence below:\n");
	for(int i = 0; i < n; i++){
		scanf("%d", &numbers[i]);
	}
	
	if (isJollyJumper(numbers, n)) {
		printf("it is a Jolly Jumper");}
	else {
		printf("not a Jolly Jumper");}
	return 0;

}
