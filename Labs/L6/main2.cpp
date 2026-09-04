///////////////////Opening a File for Writing/////////////////

// #include <fstream>
// using namespace std;

// int main() {
//     ofstream outFile("results.txt");   // creates the file, or overwrites if it exists

//     outFile << "Hello, file!" << endl;

//     outFile.close();
//     return 0;
// }


///////////////////Check If the File Opened Successfully/////////////////

// #include <fstream>
// #include <iostream>
// using namespace std;

// int main() {
//     ofstream outFile("results.txt");

//     if (!outFile.is_open()) {
//         cout << "Error: could not open file for writing!" << endl;
//         return 1;
//     }

//     outFile << "Data saved successfully." << endl;
//     outFile.close();
//     return 0;
// }

////////////////writing to a file/////////////

// #include <fstream>
// using namespace std;

// int main() {
//     ofstream outFile("energy_data.txt");

//     double time = 0.0, kineticEnergy;
//     for (int i = 0; i <= 5; i++) {
//         kineticEnergy = 0.5 * 2.0 * time * time;   // KE = 1/2 m v^2, v = t here
//         outFile << time << " " << kineticEnergy << endl;
//         time += 1.0;
//     }

//     outFile.close();
//     return 0;
// }


////////////////////opening a file for reading/////////

// #include <fstream>
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     ifstream inFile("results.txt");

//     string word1, word2;

//     inFile >> word1 >> word2; 
//     cout << word1 << " " << word2 << endl;

//     inFile.close();
//     return 0;
// }

///////////////////Check If the File Opened Successfully/////////////////

// #include <fstream>
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     // ifstream inFile("result.txt");
//     ifstream inFile("results.txt");

//     if (!inFile.is_open()) {
//         cout << "Error: could not open file for reading!" << endl;
//         return 1;
//     }

//     string word;
//     while (inFile >> word) {
//         cout << word << " ";
//     }
//     cout << endl;


//     inFile.close();
//     return 0;
// }

////////////////reading from a file 1 /////////////
// #include <fstream>
// #include <iostream>
// using namespace std;

// int main() {
//     ifstream inFile("energy_data.txt");

//     if (!inFile.is_open()) {
//         cout << "Error: could not open file for reading!" << endl;
//         return 1;
//     }

//     double t, ke;

//     while (inFile >> t >> ke) {     
//         cout << "t = " << t << ", KE = " << ke << endl;
//     }

//     inFile.close();
//     return 0;
// }


//////////////////formatting data in a file////////////
// #include <fstream>
// #include <iomanip>
// using namespace std;

// int main() {
//     ofstream outFile("clean_table.txt");

//     outFile << fixed << setprecision(2);
//     outFile << setw(8) << "Time" << setw(12) << "KE" << endl;

//     for (int i = 0; i <= 3; i++) {
//         double t = i;
//         double ke = 0.5 * 2.0 * t * t;
//         outFile << setw(8) << t << setw(12) << ke << endl;
//     }

//     outFile.close();
//     return 0;
// }


//////////