//
// Created by jared on 11/22/2024.
//

#include "StudentUtils.h"
#include <iostream>
#include <algorithm>

// Prints all student data
void printAllStudents(const std::vector<Student>& students) {
    if (students.empty()) {
        std::cout << "No students to display.\n";
        return;
    }
    for (const auto& student : students) {
        std::cout << "Name: " << student.lastName << ", " << student.firstName
                  << " | ID: " << student.studentNumber
                  << " | Grades: " << student.midterm1 << ", " << student.midterm2 << ", " << student.finalExam << '\n';
    }
}

// Sorts students by last name
void sortStudents(std::vector<Student>& students) {
    std::ranges::sort(students, [](const Student& a, const Student& b) {
        return a.lastName < b.lastName;
    });
    std::cout << "Students sorted by last name.\n";
}

// Adds a new student
void addStudent(std::vector<Student>& students) {
    Student newStudent;
    std::cout << "Enter student's last name: ";
    std::cin >> newStudent.lastName;
    std::cout << "Enter student's first name: ";
    std::cin >> newStudent.firstName;
    std::cout << "Enter student number: ";
    std::cin >> newStudent.studentNumber;
    std::cout << "Enter grade for Midterm 1: ";
    std::cin >> newStudent.midterm1;
    std::cout << "Enter grade for Midterm 2: ";
    std::cin >> newStudent.midterm2;
    std::cout << "Enter grade for Final Exam: ";
    std::cin >> newStudent.finalExam;
    students.push_back(newStudent);
    std::cout << "Student added successfully.\n";
}

// Calculates letter grades
void calculateLetterGrades(const std::vector<Student>& students, const double weight1, const double weight2, const double weightFinal) {
    if (students.empty()) {
        std::cout << "No students to calculate grades for.\n";
        return;
    }
    for (const auto& student : students) {
        const char grade = student.calculateLetterGrade(weight1, weight2, weightFinal);
        std::cout << "Student " << student.lastName << ", " << student.firstName
                  << " | Grade: " << grade << '\n';
    }
}

// Prints specific student data
void printStudentData(const std::vector<Student>& students, const int studentNumber) {
    for (const auto& student : students) {
        if (student.studentNumber == studentNumber) {
            std::cout << "Name: " << student.lastName << ", " << student.firstName
                      << " | ID: " << student.studentNumber
                      << " | Grades: " << student.midterm1 << ", " << student.midterm2 << ", " << student.finalExam << '\n';
            return;
        }
    }
    std::cout << "Student not found.\n";
}

// Removes a student by number
void removeStudent(std::vector<Student>& students, int studentNumber) {
    const auto it = std::ranges::remove_if(students, [studentNumber](const Student& student) {
        return student.studentNumber == studentNumber;
    }).begin();
    if (it != students.end()) {
        students.erase(it, students.end());
        std::cout << "Student removed successfully.\n";
    } else {
        std::cout << "Student not found.\n";
    }
}

// Deletes all student data
void deleteAllData(std::vector<Student>& students) {
    students.clear();
    std::cout << "All student data has been deleted.\n";
}