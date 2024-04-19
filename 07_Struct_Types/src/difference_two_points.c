/**
 * The distance between two points A and B in the Cartesian plane, 
 * is the measure of the line segment that connects these two points
*/

//gcc -Werror difference_two_points.c -lm

#include <stdio.h>
#include <math.h>

struct Point {
	float x; 
	float y;
};

float difference(struct Point *a, struct Point *b);

void print(struct Point *point);

int main(int argc, char** argv) {
	struct Point a;
	printf("Point A - Enter the X and Y coordinates: ");
	scanf("%f %f", &a.x, &a.y);

	struct Point b;
	printf("Point B - Enter the X and Y coordinates: ");
	scanf("%f %f", &b.x, &b.y);

	print(&a);
	print(&b);

	printf("Difference entry two points: %2.2f\n", difference(&a, &b));

	return 0;
}

float difference(struct Point *a, struct Point *b) {
	float difference = 0;
	difference = sqrt(((a->y - a->x) * (a->y - a->x)) + ((b->y - b->x) * (b->y - b->x))); 
	

}

void print(struct Point *point) {
	printf("Point X: %2.2f \tPoint Y: %2.2f\n", point->x, point->y);
}


