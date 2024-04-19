#include <stdio.h>

int main() {

	int numbers[10] = {0,1,2,3,4,5,6,7,8,9};
	int *p_numbers;
	p_numbers = numbers;
	printf("Numbers Address: %p\n", &numbers);
	printf("Numbers Address Index 0: %p\n", &numbers[0]);
	printf("Pointer Numbers Adress: %p\n", &p_numbers);
	printf("Pointer Numbers Content: %p\n", p_numbers);
	printf("Pointer Numbers Dereference: %d\n", *p_numbers);
	
	for (int i = 0; i < sizeof(numbers)/sizeof(int); i++) {
		printf("%d\n", *(p_numbers + i));
	}
	
	return 0;


}