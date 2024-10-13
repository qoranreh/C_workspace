#include <stdio.h>

#include <stdio.h>

#define MAX_STUDENTS 3

// 학생 구조체 정의
typedef struct {
    char name[50];
    int age;
    int id;
} Student;

// 학생 정보 출력 함수
void printStudentInfo(Student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("ID: %d\n\n", s.id);
}

int main() {
    // 학생 구조체 배열 선언
    Student students[MAX_STUDENTS] = {
        {"Alice", 20, 1001},
        {"Bob", 21, 1002},
        {"Charlie", 22, 1003}
    };

    // 학생 정보 출력
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printStudentInfo(students[i]);
    }

    return 0;
}
