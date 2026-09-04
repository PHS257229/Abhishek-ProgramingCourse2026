// ============================================================
// L1 - Introduction to Programming
// Topic : Declaration of Variables and Constants
// Language : C++
// ============================================================
#include <iostream>
using namespace std;

int main() {
    // --- Declaring variables ---
    int trial_number;          // declared, no value yet (contains garbage)
    double temperature;        // declared, no value yet

    // --- Assigning values separately ---
    trial_number = 5;
    temperature = 300.5;

    // --- Declaring and initializing in one line ---
    double pressure = 101.3;   // preferred style

    // --- Declaring a constant (must be initialized immediately) ---
    const double PI = 3.14159;

    // --- Printing the values ---
    cout << "Trial number: " << trial_number << endl;
    cout << "Temperature: " << temperature << " K" << endl;
    cout << "Pressure: " << pressure << " kPa" << endl;
    cout << "PI: " << PI << endl;

    // --- Trying to change a constant would fail to compile ---
    // PI = 3.14;   // Uncommenting this line causes a compiler error

    return 0;
}
// ============================================================
// TRY IT: Uncomment the 'PI = 3.14;' line and recompile.
// Observe the compiler error -- this proves 'const' is enforced.
// ============================================================