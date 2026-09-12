// #include<iostream>
// #include<fstream>

// /*
// the useful classes for workingwith files in c++  are :
// 1. fstreambase
// 2. ifstream --> derived from fstreambase
// 3. ofstream --> derived from fstreambase

// */

// // In oreder work with files in c++ , you will hace to open it . Primarily, there are 2 ways to open a file:
// //1. using the constructor
// //2. using the member function of open() of the class

// using namespace std;

// int main(){


//     string st = "Abhshek the";
//     string st1;
//     // // Opening files using constructor and writing it  
//     // ofstream abhi("sample.txt"); //Write operation 
//     // abhi<<st;
    


//     // Opening files using constructor and reading it 

//     // ifstream in("sample1.txt"); //Read operation 
//     // // in>>st1;
//     // getline(in, st1);
//     // // getline(in, st1);
//     // cout<<st1<<endl;
//     return 0;
// }










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

//     // getline(inFile ,word1);
//     // cout<<word1;

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
//     //------------first way -------- all in one line
//     while (inFile >> word) {
//         cout << word <<endl<< " ";
//     }


//     // -------second way-----------line by line
//     // getline(inFile,word);
//     // cout<<word<<endl;
//     // getline(inFile, word);
//     // cout<<word<<endl;
    
    
//     //---------third way ----------- only one word
//     // inFile>>word;
//     // cout<<word;
    
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
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ofstream outFile("clean_table.txt");

    outFile << fixed << setprecision(2);
    outFile << setw(8) << "Time" << setw(12) << "KE" << endl;

    for (int i = 0; i <= 3; i++) {
        double t = i;
        double ke = 0.5 * 2.0 * t * t;
        outFile << setw(8) << t << setw(12) << ke << endl;
    }

    outFile.close();
    return 0;
}


////////