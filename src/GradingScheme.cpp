//
// Created by jared on 11/22/2024.
//

#include "GradingScheme.h"
#include <iostream>

void changeGradingScheme(double& weight1, double& weight2, double& weightFinal) {
    std::cout << "Current grading scheme:\n";
    std::cout << "Midterm 1: " << weight1 << "%\n";
    std::cout << "Midterm 2: " << weight2 << "%\n";
    std::cout << "Final Exam: " << weightFinal << "%\n";
    std::cout << "Enter new weight for Midterm 1: ";
    std::cin >> weight1;
    std::cout << "Enter new weight for Midterm 2: ";
    std::cin >> weight2;
    std::cout << "Enter new weight for Final Exam: ";
    std::cin >> weightFinal;
    if (weight1 + weight2 + weightFinal != 100.0) {
        std::cout << "Invalid weights. Reverting to default.\n";
        weight1 = 25.0;
        weight2 = 25.0;
        weightFinal = 50.0;
    } else {
        std::cout << "Grading scheme updated.\n";
    }
}