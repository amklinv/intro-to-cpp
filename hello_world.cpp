// This is a comment
// To compile the code: g++ hello_world.cpp - creates executable a.out
// Why .cpp? Text editors and compilers recognize it as c++ code
// Sometimes people use .C instead but those are bad people
// C++ is case sensitive

// This says bring in all the stuff related to console input and output
#include <iostream>

/* So is this.
   This can be used for longer comments.
   Comments are ignored by the compiler.
   What's a compiler? It translates code from human readable to machine readable.
   The one we'll use is g++.
 */

// This is the entry point
// Why int? Because of the error code.
// Sometimes you'll see int main(int argc, char* argv[])
// This is a function
// Functions follow the template DATATYPE NAME() { STUFF }
int main() {
    // Generally good practice to tab between {}
    // cout - console output
    // \n - newline character - go to next line
    // Which cout? the one in the std namespace (standard)
    // :: is the scope operator
    // ; ends a line of code in c++
    // C++ does not care about whitespace
    std::cout << "Hello world!\n";
}