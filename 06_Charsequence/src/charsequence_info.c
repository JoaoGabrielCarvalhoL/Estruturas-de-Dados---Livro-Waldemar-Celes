/** 
 * 
 Strings, in C, are represented by vectors of type char terminated, obligatorily, by the null character ('\0').

The %s format specifier of the printf function allows you to print a string.

The language allows them to be initialized by writing the characters in double quotes.

char city[ ] = "São Paulo"; -> In this case, the null character is represented implicitly.

scanf("%c", &value); -> Read a char from input user. The %c specifier does not skip white characters

The %s specifier in the scanf function skips any white characters and captures the string of non-white characters.

We can use the format specifier %[...], in which we list between the square brackets all the characters that we will accept in the reading.
 
scanf(" %[^\n]", city); -> The scanf function now reads a string until the newline character ( '\n' ) is encountered.

OBS: The above code snippet is dangerous, because if the user provides a line that has more than 80 characters, we are invading a memory space that is not reserved (the array was sized with 81 elements).
To avoid this possible invasion, we can limit the maximum number of characters that will be captured.
scanf(" %80[^\n]", city);
 * */

#include <stdio.h>
#include <stdlib.h>

void print_char(char *);
void print_message(char *);
int size(char *);
char* str_copy(char *);
char* str_concat(char *, char *);

int main(int argc, char** argv) {

	char name[] = {'j', 'o', 'a', 'o', '\0'};
	char surname[] = {'c', 'a', 'r', 'v','a', 'l', 'h', 'o', '\0'};
	print_char(name);
	print_message(name);
	printf("\nLength: %d\n", size(name));
	printf("Copy: %s\n", str_copy(name));
	printf("Concat: %s\n", str_concat(name, surname));
	return 0;
}

void print_char(char * charsequence) {
	int i = 0;
	while (charsequence[i] != '\0') {
		printf("%c\n", charsequence[i]);
		i++;
	}
}

void print_message(char * charsequence) {
	printf("%s\n", charsequence);
}

int size(char * charsequence) {
	int i = 0; 
	int size = 0;
	while(charsequence[i] != '\0') {
		size++;
		i++;
	}
	return size;
}

char* str_copy(char *origin) {
	int length = (size(origin) + 1);
	char *charsequence = (char *) malloc(sizeof(char) * length);
	if (charsequence == NULL) exit(1);
	int i;
	for (i = 0; i < length; i++) {
		*(charsequence + i) = origin[i];
	}
	charsequence[i] = '\0';
	return charsequence;
}

char* str_concat(char *first_message, char *second_message) {
	int length = (size(first_message) + size(second_message) + 2);
	char *destiny = (char *) malloc(sizeof(char) * length);
	if (destiny == NULL) exit(1);
	int i, j;
	for (i = 0; i < size(first_message); i++) {
		*(destiny + i) = first_message[i];
	}
	*(destiny + i) = ' ';
	i++;
	int k = 0;
	for (j = i; j < length; j++) {
		*(destiny + j) = second_message[k];
		k++;
	}
	*(destiny + j) = '\0';
	return destiny;
}