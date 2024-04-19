#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct student {
	char name[100]; 
	int registration; 
	char course[50];
	char cellphone[20];
	char email[60];
} Student;

typedef struct list {
	Student *student[MAX];
	int index;
} ListStudent;

Student* build_student() {
	Student *student = (Student *) malloc(sizeof(Student));
	if(student == NULL) {
		printf("Segmentation fault!");
		exit(1);
	}
	return student;
}

ListStudent* build_list_student() {
	ListStudent *students = (ListStudent *) malloc(sizeof(ListStudent));
	if(students == NULL) {
		printf("Segmentation fault!");
		exit(1);
	}
	students->index = 0;
	return students;
}

int is_full(ListStudent *students) {
	if (students->index == MAX) {
		return -1;
	}
	return 0;
}

//O(I)
int add_to_last_index(ListStudent *students, Student *student) {
	if (!is_full(students)) {
		students->student[students->index] = student;
		students->index++;
		return 0;
	}
	printf("List is full!");
	return -1;
}

void free_student(Student *student) {
	free(student);
}

void free_list_student(ListStudent *list) {
	free(list);
}

void printAll(ListStudent *students) {
	printf("\nStudents Registration: \n");
	for (int i = 0; i < students->index; i++) {
		printf("Name: %s\nRegistration: %d\nCourse: %s\nCellphone: %s\nEmail: %s", 
			students->student[i]->name, students->student[i]->registration, students->student[i]->course, 
			students->student[i]->cellphone, students->student[i]->email);
		printf("\n - - - - - - - - - - - - - - - - - - - - - - - - - - - \n");
	}

}


int main(int argc, char** argv) {

	Student student = {"joao", 12345, "ADS", "14 999999999", "27.joaogabriel@gmail.com"};
	
	ListStudent *students = build_list_student();
	printf("%d", add_to_last_index(students, &student));	
	printAll(students);
	return 0;
}