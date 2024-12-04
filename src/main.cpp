//
// Created by jared on 11/22/2024.
//

#include "Student.h"
#include "StudentUtils.h"
#include "GradingScheme.h"
#include <vector>
#include <iostream>

int main() {
    std::vector<Student> students;  // Container to store student data
    double weightMidterm1 = 25.0, weightMidterm2 = 25.0, weightFinal = 50.0; // Initial grading weights
    int choice; // Variable to store the user's menu choice

    do {
        // Display the menu options
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
        std::cin >> choice; // Read the user's choice

        // Perform the action corresponding to the user's choice
        switch (choice) {
            case 1:
                // Print data of all students
                printAllStudents(students);
                break;

            case 2:
                // Sort students by last name
                sortStudents(students);
                break;

            case 3:
                // Add a new student to the list
                addStudent(students);
                break;

            case 4:
                // Calculate letter grades for all students based on the current grading scheme
                calculateLetterGrades(students, weightMidterm1, weightMidterm2, weightFinal);
                break;

            case 5: {
                // Print data for a specific student by ID
                int id;
                std::cout << "Enter student number: ";
                std::cin >> id;
                printStudentData(students, id);
                break;
            }

            case 6: {
                // Remove a student from the list by ID
                int id;
                std::cout << "Enter student number to remove: ";
                std::cin >> id;
                removeStudent(students, id);
                break;
            }

            case 7:
                // Delete all student data
                deleteAllData(students);
                break;

            case 8:
                // Modify the grading scheme
                changeGradingScheme(weightMidterm1, weightMidterm2, weightFinal);
                break;

            case 9:
                // Exit the program
                std::cout << "Exiting...\n";
                break;

            default:
                // Handle invalid menu choices
                std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 9); // Loop until the user chooses to exit

    return 0;
}