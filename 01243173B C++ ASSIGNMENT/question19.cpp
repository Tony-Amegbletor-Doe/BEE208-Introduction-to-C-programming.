#include <iostream>
#include <string>
#include <iomanip>

// Function to validate if the input string is a valid binary number
bool isValidBinary(const std::string& binaryStr) {
    if (binaryStr.empty()) return false;
    for (char ch : binaryStr) {
        if (ch != '0' && ch != '1') {
            return false;
        }
    }
    return true;
}

int main() {
    std::string binaryInput;

    std::cout << "===========================================\n";
    std::cout << "     BINARY SYSTEM CONVERSION CALCULATOR   \n";
    std::cout << "===========================================\n";
    std::cout << "Enter a binary number (e.g., 11011011): ";
    std::cin >> binaryInput;

    // Validate the input before attempting conversion
    if (!isValidBinary(binaryInput)) {
        std::cerr << "\nError: Invalid input! Please enter 0s and 1s only.\n";
        return 1; 
    }

    try {
        // Step 1: Convert binary string to an unsigned long long decimal integer
        // The third parameter '2' tells the compiler the source text is Base-2
        unsigned long long decimalValue = std::stoull(binaryInput, nullptr, 2);

        // Step 2: Format and display outputs using stream manipulators
        std::cout << "\n--- Conversion Results ---" << std::endl;
        
        // Decimal (Base 10) Output
        std::cout << "Decimal:     " << decimalValue << std::endl;
        
        // Octal (Base 8) Output
        std::cout << "Octal:       " << std::oct << decimalValue << std::endl;
        
        // Hexadecimal (Base 16) Output (Converted to uppercase characters)
        std::cout << "Hexadecimal: " << std::uppercase << std::hex << decimalValue << std::endl;
        
    } catch (const std::out_of_range& e) {
        std::cerr << "\nError: The binary number is too large to process.\n";
    }

    return 0;
}