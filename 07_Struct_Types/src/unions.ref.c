/**
 * Union
 * In C, a union is a memory location that is shared by different variables, 
 * which can be of different types. 
 * Unions are used when we want to store heterogeneous values in the same memory space.
 * */

#include <stdio.h>

union points {
	int x;
	int y;
	int z;
	char* name;
};

int main(int argc, char** argv) {

	union points points;
	points.x = 1;
	points.y = 2; 
	points.z = 3;
	points.name = "Any Name";
	return 0;
}

/**
 * However, that only a single element of a union can be stored at a given moment, 
 * since the assignment to a field of the union overwrites the value previously assigned to any other field.
 * */