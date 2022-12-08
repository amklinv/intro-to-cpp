// Pound include iostream
#include <iostream>

int main() {
    int number = 13;
    // Variable declarations can be separated by comma
    int first=1, second=1;

    // This is a for loop
    // Declaration; Condition; Increment
    // ++ means increment by 1
    // First thing that happens with loop:
    // set counter to 2
    // evaluate condition (counter < number)
    // do stuff in {}
    // counter -> 3
    // evaluate condition
    // do stuff in {}
    for(int counter=2; counter<number; counter++) {
        int temp = first + second;
        first = second;
        second = temp;
    }
}