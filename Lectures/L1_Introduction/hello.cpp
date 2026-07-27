// ============================================================
// L1 - Introduction to Programming
// Topic : Writing, Compiling and Executing a Program
// Language : C++
// ============================================================

// '#include' brings in external libraries
// 'iostream' allows us to print to the screen
#include <iostream>

// 'using namespace std' lets us write 'cout' instead
// of 'std::cout' every time
using namespace std;

// Every C++ program must have a 'main' function
// This is where execution begins
int main() {

    // 'cout' prints to the screen
    // '<<' is the output operator
    // 'endl' moves to the next line
    cout << "Hello, World!" << endl;

    // 'return 0' tells the OS the program ran successfully
    return 0;

}

// ============================================================
// HOW TO COMPILE AND RUN:
//   g++ hello.cpp -o hello
//   ./hello
// ============================================================
