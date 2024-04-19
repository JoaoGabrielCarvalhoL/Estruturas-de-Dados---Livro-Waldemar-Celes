/**
 * Given a set of elements, 
 * calculate the arithmetic mean and variance of the elements.
 * */
#include <stdio.h>
#include <stdlib.h>

float average(float *pointer_numbers, int lenght);
float variance(float *pointer_numbers, int lenght, float avg);
void print_set_elements(float *, int lenght, float average, float variance);
void calculate(float *pointer_numbers, int lenght);

int main() {

	int lenght = 0;
	printf("Enter the total amount of the set of elements to be calculated: ");
	scanf("%d", &lenght);

	float *pointer_numbers;
	pointer_numbers = (float *) malloc(sizeof(float) * lenght);

	if (pointer_numbers == NULL) {
		printf("Segmentation fault.");
		exit(1);
	}

	printf("Enter element set: \n");

	for (int i = 0; i < lenght; i++) {
		printf("%d: ", i+1);
		scanf("%f", &pointer_numbers[i]);
	}

	calculate(pointer_numbers, lenght);
	
	free(pointer_numbers);

	return 0;
}

void calculate(float *pointer_numbers, int lenght){
	float avg = average(pointer_numbers, lenght);
	float var = variance(pointer_numbers, lenght, avg);
	print_set_elements(pointer_numbers,lenght, avg, var);
}


void print_set_elements(float *pointer_numbers, int lenght, float average, float variance) {

	printf("Elements:\n");
	for (int i = 0; i < lenght; i++) {
		printf("%2.2f\t", *(pointer_numbers + i));
	}
	printf("\n");
	printf("Average: %2.2f\n", average);
	printf("Variance: %2.2f\n", variance);
	printf("\n");
}

float average(float *pointer_numbers, int lenght) {
	float average = 0.0f;
	for (int i = 0; i < lenght; i++) {
		average += *(pointer_numbers + i);
	}
	return average/lenght;
}

float variance(float *pointer_numbers, int lenght, float avg) {
	float variance = 0.0f;
	for (int i = 0; i < lenght; i++) {
		variance += ((*(pointer_numbers + i) - avg) * (*(pointer_numbers + i) - avg)); 
	}
	return variance/lenght;
}

