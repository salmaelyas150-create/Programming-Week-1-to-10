
#include <stdio.h>
#include <string.h>

// Define Student structure
struct Student {
    char name[50];
    int age;
};

// Setter function
void setAge(struct Student *s, int newAge) {
    if (newAge > 0 && newAge < 120) {
        s->age = newAge;
    } else {
        printf("Error: Invalid age! Age must be between 1 and 119.\n");
        s->age = 0;
    }
}

// Getter function
int getAge(struct Student *s) {
    return s->age;
}

int main() {
    // Create Student structure
    struct Student s1;

    // Initialize student
    strcpy(s1.name, "Alice");

    setAge(&s1, 20);

    // Display student details
    printf("Student Name: %s\n", s1.name);
    printf("Student Age: %d\n", getAge(&s1));

    // Test invalid age
    printf("\nAttempting to change age to -5...\n");

    setAge(&s1, -5);

    printf("Age after invalid attempt: %d\n", getAge(&s1));

    return 0;
}
