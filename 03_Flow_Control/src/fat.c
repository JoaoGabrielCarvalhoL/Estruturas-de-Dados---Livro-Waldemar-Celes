#include <stdio.h>
#include <stdlib.h>

int fatorial(int);

int main() {

	int number;
	printf("Integer and positive only. Enter a number: ");
	scanf("%d", &number);
	printf("Factorial: %d\n", fatorial(number));
	return 0;
}

int fatorial(int number) {

	if (number < 0) {
		printf("Only positive number.\n");
		exit(1);
	}

	int fat = 1;
	for (int i = number; i > 1; i--) {
		fat = fat * i;
	}

	return fat;
}
