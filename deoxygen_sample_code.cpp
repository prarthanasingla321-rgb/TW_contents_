/**
 * \file sample-code.cpp
 * \brief Demonstration of documenting C++ code with Doxygen.
 *
 * This example contains a documented function and class.
 */

#include <iostream>

/**
 * \brief Adds two integers.
 *
 * Calculates and returns the sum of two integer values.
 * \param a First integer.
 * \param b Second integer.
 * \return The sum of a and b.
 */
int add(int a, int b) {
    return a + b;
}

/**
 * \class Calculator
 * \brief A simple calculator class.
 *
 * Provides an addition operation through a member function.
 */
class Calculator {
public:
    /**
     * \brief Adds two integers.
     * \param x First integer.
     * \param y Second integer.
     * \return The sum of x and y.
     */
    int sum(int x, int y) {
        return x + y;
    }
};

/**
 * \brief Program entry point.
 * \return 0 when the program finishes successfully.
 */
int main() {
    Calculator calculator;
    std::cout << "Function result: " << add(10, 20) << '\n';
    std::cout << "Class result: " << calculator.sum(5, 7) << '\n';
    return 0;
}
