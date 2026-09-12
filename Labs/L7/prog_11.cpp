///////////// defining a function before main function ///////////////

// #include <iostream>
// using namespace std;

// // Function defined OUTSIDE main — at the top level
// double computeKineticEnergy(double mass, double velocity) {
//     return 0.5 * mass * velocity * velocity;
// }

// int main() {
//     double m = 2.0, v = 3.0;

//     // Function CALLED from inside main
//     double ke = computeKineticEnergy(m, v);

//     cout << "Kinetic Energy = " << ke << endl;
//     return 0;
// }


///////////// defining a function after main function ///////////////

// #include <iostream>
// using namespace std;

// // Declaration (prototype) — tells the compiler "this function exists, trust me"
// double computeKineticEnergy(double mass, double velocity);

// int main() {
//     double m = 2.0, v = 3.0;
//     double ke = computeKineticEnergy(m, v);   // works — prototype seen above
//     cout << "Kinetic Energy = " << ke << endl;
//     return 0;
// }

// // Definition — actual body, can come after main
// double computeKineticEnergy(double mass, double velocity) {
//     return 0.5 * mass * velocity * velocity;
// }


////////////////// parameters and arguments-pass by value//////////////

// #include <iostream>
// using namespace std;

// void doubleIt(double x) {
//     x = x * 2;   // modifies the COPY only
//     cout << "Inside function, x = " << x << endl;
// }

// int main() {
//     double num = 5.0;
//     doubleIt(num);
//     cout << "Back in main, num = " << num << endl;   // still 5.0!
//     return 0;
// }


////////////////// parameters and arguments-pass by value 2 //////////////

// #include <iostream>
// using namespace std;

// double doubleIt(double x) {
//     x = x * 2;   // modifies the COPY only
//     cout << "Inside function, x = " << x << endl;
//     return x;
// }

// int main() {
//     double num = 5.0;
//     num = doubleIt(num);
//     cout << "Back in main, num = " << num << endl;   // still 5.0!
//     return 0;
// }
