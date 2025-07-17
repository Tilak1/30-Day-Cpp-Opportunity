#include <iostream>
#include <string>
#include <sstream> // For std::istringstream
#include <stdexcept> // For std::runtime_error

using namespace std;

// Function to safely get numeric input
template <typename T>
T getNumericInput(const std::string& prompt) {
    std::string input;
    T value;

    while (true) {
        std::cout << prompt;
        std::getline(std::cin, input); // Read input as a string

        std::istringstream iss(input); // Create a string stream from the input string
        iss >> value; // Attempt to extract the value

        if (iss.fail() || !iss.eof()) { // Check for extraction failure or extraneous characters
            std::cout << "Invalid input. Please enter a valid number." << std::endl;
        } else {
            return value;
        }
    }
}

// Function template for division
template <typename T>
T divide(T x, T y) {
    // Compile-time check using if constexpr
    if constexpr (std::is_floating_point_v<T>) {
        if (y == 0.0) {
            throw y;
        }
    } else {
        if (y == 0) {
            throw y;
        }
    }
    return x / y;
}

int main() {
    double num = getNumericInput<double>("Enter numerator: ");
    double den = getNumericInput<double>("Enter denominator: ");

    try {
        double result = divide(num, den);
        std::cout << "Result: " << result << std::endl;
    } catch (double e) {
        std::cout << "Exception caught: Division by zero for floating-point denominator: " << e << std::endl;
    }

    return 0;
}
