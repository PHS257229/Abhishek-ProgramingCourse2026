
// /////main program 1//////
// #include <iostream>
// #include "kinetic.h"
// using namespace std;

// int main() {
//     double m = 2.5, v = 10.0;   // mass in kg, velocity in m/s
//     cout << "KE = " << kineticEnergy(m, v) << " J" << endl;
//     return 0;
// }


///////main program 2//////
#include <iostream>
#include "temp_convert.h"
using namespace std;

int main() {
    double bodyTemp = 37.0;   // Celsius
    cout << bodyTemp << " C = " << celsiusToFahrenheit(bodyTemp) << " F" << endl;
    return 0;
}


