//
// Created by jared on 11/22/2024.
//

#include "Student.h"

double Student::calculateAverage(const double weight1, const double weight2, const double weightFinal) const {
    return (midterm1 * weight1 + midterm2 * weight2 + finalExam * weightFinal) / 100.0;
}

char Student::calculateLetterGrade(const double weight1, const double weight2, const double weightFinal) const {
    const double avg = calculateAverage(weight1, weight2, weightFinal);
    if (avg > 90) return 'A';
    if (avg > 80) return 'B';
    if (avg > 70) return 'C';
    if (avg > 60) return 'D';
    return 'F';
}