#include <stdio.h>
#include <string.h>

struct Person {
	char name[50];
	int age;
};

int main() {
	Person person1;
	Person *person2;

	strcpy(person1.name, "Eaktana");
	person1.age = 19;

	person2 = &person1;
	printf("Name: %s\n", person2->name);
	printf("Age: %d\n", person2->age);

	return 0;
}