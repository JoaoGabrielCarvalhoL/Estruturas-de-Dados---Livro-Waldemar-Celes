#include <stdio.h>

typedef struct point{
	float x; 
	float y;
} Point;

/** Memory Allocation 
 * struct point *p;
 * p = (struct point) malloc(sizeof(struct point));
 * */

int main(int argc, char** argv) {
	Point point;
	Point point_reference;

	printf("Enter the X and Y coordinates: ");
	scanf("%f %f", &point.x, &point.y);

	printf("Point X: %2.2f \tPoint Y: %2.2f\n", point.x, point.y);

	struct point *p_point;
	p_point = &point_reference;

	p_point->x = 15.0;
	p_point->y = 12.0;
	printf("Point X: %2.2f \tPoint Y: %2.2f\n", p_point->x, p_point->y);

	(*p_point).x = 22.0;
	(*p_point).y = 25.0;
	printf("Point X: %2.2f \tPoint Y: %2.2f\n", (*p_point).x, (*p_point).y);

	return 0;
}