//
// Created by jared on 11/22/2024.
//

#ifndef STUDENT_UTILS_H
#define STUDENT_UTILS_H

#include "Student.h"
#include <vector>

// Function declarations
void printAllStudents(const std::vector<Student>& students);
void sortStudents(std::vector<Student>& students);
void addStudent(std::vector<Student>& students);
void calculateLetterGrades(const std::vector<Student>& students, double weight1, double weight2, double weightFinal);
void printStudentData(const std::vector<Student>& students, int studentNumber);
void removeStudent(std::vector<Student>& students, int studentNumber);
void deleteAllData(std::vector<Student>& students);

#endif // STUDENT_UTILS_H