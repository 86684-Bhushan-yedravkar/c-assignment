     #include<stdio.h>

int main() {
    int marks[5], total = 0;
    printf("Enter marks in 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    float average = (float)total / 5;
    char grade;
    if (average >= 90) grade = 'E';
    else if (average >= 80) grade = 'A';
    else if (average >= 70) grade = 'B';
    else if (average >= 60) grade = 'C';
    else grade = 'F';
    printf("Grade: %c\n", grade);
    return 0;}