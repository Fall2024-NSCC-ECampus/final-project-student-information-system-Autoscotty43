//
// Created by jared on 11/22/2024.
//

#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    std::string lastName;
    std::string firstName;
    int studentNumber;
    double midterm1, midterm2, finalExam;

    [[nodiscard]] double calculateAverage(double weight1, double weight2, double weightFinal) const;
    [[nodiscard]] char calculateLetterGrade(double weight1, double weight2, double weightFinal) const;
};

#endif // STUDENT_H