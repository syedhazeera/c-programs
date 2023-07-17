// Online C compiler to run C program online
#include <stdio.h>

void calculateAverageAndPercentage(int marks1, int marks2, int marks3, double* average, double* percentage) {
    int totalMarks = marks1 + marks2 + marks3;
    *average = totalMarks / 3.0;
    *percentage = (totalMarks / (3.0 * 100)) * 100;
}

int main() {
    int marksSubject1 = 75;
    int marksSubject2 = 82;
    int marksSubject3 = 90;
    double average, percentage;

    calculateAverageAndPercentage(marksSubject1, marksSubject2, marksSubject3, &average, &percentage);

    printf("Average marks: %.2f\n", average);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}

/*output:
Average marks: 82.33
Percentage: 82.33%
*/