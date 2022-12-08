#include <iostream>

int main() {
    // This is a variable
    // Variables have datatypes
    // This is an integer
    // number is the variable name
    // We can assign a value with =, the assignment operator
    int number = 8;

    // % is the modular arithmetic operator
    // What is the remainder when we divide by a number?
    // 5 % 2 = 1
    // 4 % 2 = 0
    // == is the comparison operator
    // Condition goes in ()
    // Stuff to do when the condition is met is in {}
    if(number % 2 == 0) {
        std::cout << number << " is even\n";
    }
    // Why doesn't else have ()?
    // This is already unambiguous
    else {
        std::cout << number << " is odd\n";
    }

    // Selection statement
    // Note that there is an order of priority
    /*
    if(temp == 69) {

    }
    // >= is greater than or equal
    // > is strictly >
    // && is logical and
    // & is an opperator in c++
    // & is bitwise and
    // 1 in binary: 000000000001
    // 2 in binary: 000000000010
    // 3 in binary: 000000000011
    // 4 in binary: 000000000100
    else if(temp >= 68 && temp <= 70) {
        
    }
    else {

    }
    */
}