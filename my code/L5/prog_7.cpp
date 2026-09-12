
//////////////// the if statement ////////
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double temperature = 42.5;

//     if (temperature > 40.0) {
//         cout << "Warning: temperature exceeds safe threshold!" << endl;
//     }

//     cout << "Reading logged." << endl;
//     return 0;
// }

//////////////// the if else statement ////////
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double measurement = 9.85;
//     double expected = 9.8;
//     double tolerance = 0.1;

//     if (abs(measurement - expected) <= tolerance) {
//         cout << "Within tolerance." << endl;
//     } else {
//         cout << "Outlier detected." << endl;
//     }

//     return 0;
// }


//////////////// else if ladder ////////

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double measurement = 15.2;

//     if (measurement < 5.0) {
//         cout << "Low range." << endl;
//     } else if (measurement < 10.0) {
//         cout << "Mid range." << endl;
//     } else if (measurement < 20.0) {
//         cout << "High range." << endl;
//     } else {
//         cout << "Out of instrument range." << endl;
//     }

//     return 0;
// }

//////////////// else if ladder 2 (buggy code) ///////////////
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double windSpeed = 62.0;   // km/h

//     if (windSpeed > 30.0) {
//         cout << "Category: Pleasant" << endl;
//     } else if (windSpeed > 60.0) {
//         cout << "Category: Storm" << endl;
//     } else if (windSpeed > 90.0) {
//         cout << "Category: Severe Storm" << endl;
//     } else {
//         cout << "Category: Calm" << endl;
//     }

//     return 0;
// }


///////////////////////// nested if ///////////////////////
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double measurement = 9.85;
//     bool instrumentCalibrated = true;

//     if (instrumentCalibrated) {
//         if (measurement > 9.0 && measurement < 10.0) {
//             cout << "Reading accepted: within calibrated range." << endl;
//         } else {
//             cout << "Reading rejected: outside calibrated range." << endl;
//         }
//     } else {
//         cout << "Reading rejected: instrument not calibrated." << endl;
//     }

//     return 0;
// }

//////////////////// switch //////////////////////////////
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int month = 3;

//     switch (month) {
//         case 1:
//             cout << "January" << endl;
//             break;
//         case 2:
//             cout << "February" << endl;
//             break;
//         case 3:
//             cout << "March" << endl;
//             break;
//         default:
//             cout << "Invalid month" << endl;
//     }

//     return 0;
// }


// /////////////////////////////     end          /////////////////////////