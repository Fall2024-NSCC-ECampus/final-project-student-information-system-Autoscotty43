//
// Created by jared on 11/22/2024.
//

#include "GradingScheme.h"
#include <iostream>
#include <limits>

void changeGradingScheme(double& weight1, double& weight2, double& weightFinal) {
    // Display the current grading scheme
    std::cout << "Current grading scheme:\n";
    std::cout << "Midterm 1: " << weight1 << "%\n";
    std::cout << "Midterm 2: " << weight2 << "%\n";
    std::cout << "Final Exam: " << weightFinal << "%\n";

    double newWeight1, newWeight2, newWeightFinal;

    while (true) {
        // Prompt for new weight for Midterm 1
        std::cout << "Enter new weight for Midterm 1: ";
        std::cin >> newWeight1;

        // Validate input for Midterm 1 weight
        if (std::cin.fail() || newWeight1 < 0 || newWeight1 > 100) {
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a value between 0 and 100.\n";
            continue; // Retry input
        }

        // Prompt for new weight for Midterm 2
        std::cout << "Enter new weight for Midterm 2: ";
        std::cin >> newWeight2;

        // Validate input for Midterm 2 weight
        if (std::cin.fail() || newWeight2 < 0 || newWeight2 > 100) {
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a value between 0 and 100.\n";
            continue; // Retry input
        }

        // Prompt for new weight for Final Exam
        std::cout << "Enter new weight for Final Exam: ";
        std::cin >> newWeightFinal;

        // Validate input for Final Exam weight
        if (std::cin.fail() || newWeightFinal < 0 || newWeightFinal > 100) {
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a value between 0 and 100.\n";
            continue; // Retry input
        }

        // Ensure the weights sum to 100%
        if (newWeight1 + newWeight2 + newWeightFinal != 100.0) {
            std::cout << "The weights must sum to 100. Please try again.\n";
        } else {
            break; // Valid weights, exit loop
        }
    }

    // Update the weights if all inputs are valid
    weight1 = newWeight1;
    weight2 = newWeight2;
    weightFinal = newWeightFinal;
    std::cout << "Grading scheme updated.\n";
}