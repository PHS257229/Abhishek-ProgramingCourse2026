// ///////////////////////////////Data types////////////////////////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     // Basic data types describing a student's CV
//     int age = 22;                     // whole number
//     float cgpa = 8.7f;                 // decimal number (single precision)
//     double attendance = 91.256;        // decimal number (double precision, more accurate)
//     char grade = 'A';                  // single character (overall grade)
//     bool hasInternship = true;         // true or false

//     // Displaying all the values on screen
//     cout << "----- Student CV -----" << endl;
//     cout << "Age: " << age << " years" << endl;
//     cout << "CGPA: " << cgpa << endl;
//     cout << "Attendance: " << attendance << "%" << endl;
//     cout << "Overall Grade: " << grade << endl;
//     cout << "Internship Experience: " << (hasInternship ? "Yes" : "No") << endl;

//     return 0;
// }

/////////////////////////////Data conversion 1 (explicit conversion)///////////////////////////////

// #include <iostream>
// using namespace std;

// int main(){
//     int a = 7, b = 2;
//     double result = a / b;            // implicit: still gives 3 (integer division first!)
//     double correct = (double)a / b;   // explicit cast: gives 3.5
//     cout << "result: " <<result << " correct: " <<correct<<endl;
//     return 0;
// }


/////////////////////////////Data conversion 2 (explicit conversion) ///////////////////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     char grade = 'A';        

//     cout << "As character: " << grade << endl;              
//     cout << "As number: " << (int)grade << endl;             
//     cout << "Grade + 1: " << (char)(grade + 1) << endl;      

//     return 0;
// }


/////////////////////////////Data conversion 3 (implicit conversion) ///////////////////////////////

#include <iostream>
using namespace std;

int main() {
    int grade;      
    char marks;
    marks=67;  
    grade = 'A';
    cout << grade << endl;  
    cout << marks << endl;                          
    return 0;
}


/////////////////////////////console input/output ///////////////////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     string first_name, last_name;
//     cout << "Enter your full name: ";
//     cin >> first_name >> last_name;   // reads the whole line, including spaces
//     cout << "Hello, " << first_name << " " << last_name << "!" << endl;
//     return 0;
// }

/////////////////////////////Formatting 1 ///////////////////////////////

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     double planck = 0.000000000000000000000000000000000662607015;   // Planck's constant

//     cout << "Default:    " << planck << endl;
//     cout << "Fixed:      " << fixed << setprecision(4) << planck << endl;
//     cout << "Scientific: " << scientific << setprecision(4) << planck << endl;
//     cout << "Padded:     " << setfill('0') << setw(15) << 42 << endl;

//     return 0;
// }


/////////////////////////////Formatting 2 ///////////////////////////////

// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     string name1 = "Marie Curie", name2 = "Isaac Newton";
//     double cgpa1 = 8.7, cgpa2 = 9.15;
//     int roll1 = 7, roll2 = 42;

//     // cout << setprecision(3);      // sticky: applies to all doubles below
//     cout << fixed << setprecision(3);      // sticky: applies to all doubles below

//     cout << right << setfill('0') << setw(4) << roll1 << "  "
//         << left << setfill(' ') << setw(15) << name1 << setw(6) << cgpa1 << endl;

//     cout << right << setfill('0') << setw(4) << roll2 << "  "
//         << left << setfill(' ') << setw(15) << name2 << setw(6) << cgpa2 << endl;

//     return 0;
// }