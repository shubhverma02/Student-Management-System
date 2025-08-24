#ifndef STUDENT_H
#define STUDENT_H

#define MAX_NAME 50

typedef struct {
    int roll;
    char name[MAX_NAME];
    float marks;
} Student;

void addStudent();
void displayStudents();
void searchStudent();
void updateStudent();
void deleteStudent();

#endif
