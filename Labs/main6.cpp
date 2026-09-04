/////////////////////// while  /////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     int reading = 1;

//     while (reading <= 5) {
//         cout << "Taking reading #" << reading << endl;
//         reading = reading + 1;
//     }

//     cout << "Data collection complete." << endl;
//     return 0;
// }


////////////////// for //////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     for (int reading = 1; reading <= 5; reading = reading + 1) {
//         cout << "Taking reading #" << reading << endl;
//     }

//     cout << "Data collection complete." << endl;
//     return 0;
// }


////////////////break /////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 10; i = i + 1) {
//         if (i == 6) {
//             break;   // exit the loop right here
//         }
//         cout << "Reading #" << i << endl;
//     }

//     cout << "Stopped early." << endl;
//     return 0;
// }

//////////////////continue/////////////
// #include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 5; i = i + 1) {
//         if (i == 3) {
//             continue;   // skip the rest of THIS iteration only
//         }
//         cout << "Reading #" << i << endl;
//     }

//     return 0;
// }



////////////////array///////////////
// #include <iostream>
// using namespace std;

// int main() {
//     double readings[5] = {9.8, 9.85, 9.79, 9.83, 9.81};

//     cout << "First reading: " << readings[0] << endl;
//     cout << "Third reading: " << readings[2] << endl;

//     return 0;
// }


///////////declaring arrays///////////////
// #include <iostream>
// using namespace std;

// int main() {
//     // 1. Declare with size, initialize all values
//     double readings1[5] = {9.8, 9.85, 9.79, 9.83, 9.81};
//     for (int i = 0; i < 5; i = i + 1) {
//         cout << "readings1[" << i << "] = " << readings1[i] << endl;
//     }
//     // 2. Declare without size, let compiler count from the list
//     double readings2[] = {9.8, 9.85, 9.79, 9.83, 9.81};   // size auto = 5
//     for (int i = 0; i < sizeof(readings2)/sizeof(readings2[0]); i = i + 1) {
//         cout << "readings2[" << i << "] = " << readings2[i] << endl;
//     }
//     // 3. Declare size, initialize LATER (values are garbage until set)
//     double readings3[5];
//     readings3[0] = 9.8;
//     readings3[1] = 9.85;
//     for (int i = 0; i < 5; i = i + 1) {
//         cout << "readings3[" << i << "] = " << readings3[i] << endl;
//     }

//     // 4. Declare with size, PARTIAL initialization
//     double readings4[5] = {9.8, 9.85};   // remaining elements auto-filled with 0.0
//     for (int i = 0; i < 5; i = i + 1) {
//         cout << "readings4[" << i << "] = " << readings4[i] << endl;
//     }

//     // 5. Declare with size, empty initialization
//     double readings5[5] = {};   // elements auto-filled with 0.0
//     for (int i = 0; i < 5; i = i + 1) {
//         cout << "readings5[" << i << "] = " << readings5[i] << endl;
//     }

//     return 0;
// }


/////////////////////// multi dimensional array ////////////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     // A 2x3 grid: 2 rows, 3 columns
//     double detectorGrid[2][3] = {
//         {1.2, 1.5, 1.8},
//         {2.1, 2.4, 2.7}
//     };

//     cout << "Row 0, Col 0: " << detectorGrid[0][0] << endl;
//     cout << "Row 1, Col 2: " << detectorGrid[1][2] << endl;

//     return 0;
// }



//////////////////// looping through 2D array ///////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     const int ROWS = 2;
//     const int COLS = 3;
//     double detectorGrid[ROWS][COLS] = {
//         {1.2, 1.5, 1.8},
//         {2.1, 2.4, 2.7}
//     };

//     // Outer loop: rows | Inner loop: columns
//     for (int row = 0; row < ROWS; row = row + 1) {
//         for (int col = 0; col < COLS; col = col + 1) {
//             cout << "grid[" << row << "][" << col << "] = " << detectorGrid[row][col] << endl;
//         }
//     }

//     return 0;
// }


/////////////////////Strings///////////////////////////////
#include <iostream>
#include <string>
using namespace std;

int main() {
    // C-style string — a char array, inherited from C
    char name1[20] = "Newton";

    // C++ string — the modern, easier way
    string name2 = "Einstein";

    cout << name1 << endl;
    cout << name2 << endl;
    // cout<<name1<<endl
    return 0;
}