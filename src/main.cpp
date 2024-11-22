//
// Created by jared on 11/22/2024.
//

#include "Student.h"
#include "StudentUtils.h"
#include "GradingScheme.h"
#include <vector>
#include <iostream>

int main() {
    std::vector<Student> students;
    double weightMidterm1 = 25.0, weightMidterm2 = 25.0, weightFinal = 50.0;
    int choice;

    do {
        std::cout << "\n1) Print all Student data\n"
                  << "2) Sort students by last name\n"
                  << "3) Add a new student\n"
                  << "4) Calculate letter grades\n"
                  << "5) Print specific student data\n"
                  << "6) Remove a student\n"
                  << "7) Delete ALL student data\n"
                  << "8) Change grading scheme\n"
                  << "9) Exit\n"
                  << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: printAllStudents(students); break;
            case 2: sortStudents(students); break;
            case 3: addStudent(students); break;
            case 4: calculateLetterGrades(students, weightMidterm1, weightMidterm2, weightFinal); break;
            case 5: {
                int id;
                std::cout << "Enter student number: ";
                std::cin >> id;
                printStudentData(students, id);
                break;
            }
            case 6: {
                int id;
                std::cout << "Enter student number to remove: ";
                std::cin >> id;
                removeStudent(students, id);
                break;
            }
            case 7: deleteAllData(students); break;
            case 8: changeGradingScheme(weightMidterm1, weightMidterm2, weightFinal); break;
            case 9: std::cout << "Exiting...\n"; break;
            default: std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 9);

    return 0;
}