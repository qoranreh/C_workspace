#include <stdio.h>

#include <stdio.h>

#define MAX_STUDENTS 3

// �л� ����ü ����
typedef struct {
    char name[50];
    int age;
    int id;
} Student;

// �л� ���� ��� �Լ�
void printStudentInfo(Student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("ID: %d\n\n", s.id);
}

int main() {
    // �л� ����ü �迭 ����
    Student students[MAX_STUDENTS] = {
        {"Alice", 20, 1001},
        {"Bob", 21, 1002},
        {"Charlie", 22, 1003}
    };

    // �л� ���� ���
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printStudentInfo(students[i]);
    }

    return 0;
}
