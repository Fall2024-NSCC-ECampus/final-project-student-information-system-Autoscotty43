# Student Management System

---

This is a C++ console application that manages student data in a classroom. The program provides functionalities such as adding students, sorting, calculating grades, and more. The project is organized into multiple folders for clarity and ease of maintenance.

---

## Features
1. **Print all student data**: Displays a list of all students and their attributes.
2. **Sort students**: Sorts students alphabetically by last name. If two students share the same last name, sorting is done by first name.
3. **Add a new student**: Allows adding new student data.
4. **Calculate letter grades**:
    - A: Average grade > 90%
    - B: 80% ≤ Average grade ≤ 90%
    - C: 70% ≤ Average grade < 80%
    - D: 60% ≤ Average grade < 70%
    - F: Average grade < 60%
5. **Edit a student’s information**: Modify data of an existing student.
6. **Delete a student**: Remove a specific student from the list.
7. **Delete all data**: Clear all student records.
8. **Change grading scheme**: Customize the weightage of midterms and final exams.
9. **Exit**: Safely exit the application.

## Project Structure

---

StudentInformationSystem/ ├── include/ # Header files │ ├── Student.h # Student class definition │ ├── GradingScheme.h # GradingScheme class definition │ ├── Menu.h # Functions for displaying and handling the menu │ └── ... # Additional headers ├── src/ # Source files │ ├── main.cpp # Entry point of the program │ ├── Student.cpp # Implementation of Student class │ ├── GradingScheme.cpp # Implementation of GradingScheme class │ └── ... # Additional source files ├── CMakeLists.txt # Build configuration file └── README.md # Project documentation

---

## Getting Started

### Prerequisites
- **C++ Compiler**: Ensure you have a C++ compiler that supports C++17 or later.
- **CMake**: Build system generator.
- **CLion** (optional): IDE for C++ development.
---
