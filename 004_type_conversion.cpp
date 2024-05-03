#include <iostream>

// Let's say that I want to do a int division

int main() {
    int x = 6;
    int y = 10;

    // The result is 0 since the integer value is being truncated to a integer.
    // The result should be 0.6
    std::cout << x/y << "\n";

    
    // Now explicit converting the value to a double. The result is showing as an double value.
    // Outputting correctly the expected 0.6 result.
    //
    // All the below options give the correct value.
    // To explicit cast a value into another, you type as follows:
    // Ex:
    // (type)variable;
    std::cout << (double)x/y << "\n";
    std::cout << x/(double)y << "\n";
    std::cout << (double)x/(double)y << "\n";

    return 0;
}
