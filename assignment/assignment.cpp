// #include<iostream>
// using namespace std;

// int main(){

//     double m, v, p;
//     cout<<"enter the value of mass in Kg :  " ;
//     cin>>m;
//     cout<<"Enter the value of velocity in m/s :  ";
//     cin>>v;
//     p = m *v;
//     cout<<"The value of memontum is : "<<p<<endl;
    
//     return 0;
    
// }



// //-------------------question 2------------------------
// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main(){
//     double capacitance = 0.000047;
//     cout<<"Capacitnance = " <<scientific<<setprecision(3)<<capacitance<<" F"<<endl;
    

//     return 0;
// }



// //---------------------question 3 --------------------------------------

// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main(){

//     double current[] = {5.2,118.6,27.05,3.75};
//     cout<<setw(10)<<right<<"reading"<<setw(10)<<right<<"current(mA)"<<endl; 

//     for(int i=0; i<4; i++){
//         cout<<setw(10)<<right<<(i+1)<<setw(10)<<right<<current[i]<<endl;
//     }

//     return 0;
// }



// //------------------------------------ question 4 -------------------------

// #include <iostream>
// #include <iomanip> 

// using namespace std;

// int main() {
  
//     double pi = 3.14159265;
//     cout << "pi = " << fixed << setprecision(5) << pi << endl;

//     return 0;
// }




//----------------------question 5 --------------------------------

// #include <iostream>
// using namespace std;

// int main() {
//     double voltage, current;

//     // Read voltage and current from the user
//     cout << "Enter voltage (V) : ";
//     cin >> voltage ;
//     cout<<"Enter current (A) : ";
//     cin>>current ;
//     // Check if both conditions are within safe ranges
//     if ((voltage >= 0 && voltage <= 230) && (current >= 0 && current <= 10)) {
//         cout << "Safe" <<endl;
//     } else {
//         cout << "Unsafe" << endl;
//     }

//     return 0;
// }




//// <<<<<<<<<<<<<< Question 6 >>>>>>>>>>>>>>>>>>>>>>



// #include<iostream>
// using namespace std;


// int main(){

//     double R1, R2, R3, R;
//     cout<<"Enter the value of resistance R1 : ";
//     cin>>R1;
//     cout<<"Enter the value of resistance R2 : ";
//     cin>>R2;
//     cout<<"Enter the value of resistance R3 : ";
//     cin>>R3;
//     // average of three resistance 
//     R = (R1 + R2 + R3)/3;
//     cout<<"The averave (R) = " << R <<" omhs"<<endl;

//     return 0;
// }



// ------------------------ question 7 ---------------
// #include<iostream>
// using namespace std;

// int main(){
//     double voltage;

//     cout<< "Enter the current value of voltage : ";
//     cin>>voltage ;

//     if(voltage>230){
//         cout<<"WARNING: Overvoltage!"<<endl;
//     }
//     else{
//         cout<<"Safe ";
//     }

//     return 0;

// }

//-----------------------     question 8      -------------------
// #include<iostream>
// using namespace std;

// int main(){

//     double magnitude ;

//     cout<<"Enter earthquake magnitude: ";
//     cin>>magnitude;

//     if(magnitude < 4.0){
//         cout<<"Minor"<<endl;
//     }else if(magnitude < 6.0){
//         cout<<"Moderate";
//     }else if (magnitude < 7.5){
//         cout<<"Major";
//     }
//     else{
//         cout<<"Great";
//     }
    
//     return 0;

// }


// ------------------   question 9  -----------------

// #include<iostream>
// using namespace std;

// int main(){
//     char grade;
//     cout << "Enter lab practical grade (A, B, C, D, F): ";
//     cin>> grade;
//     switch (grade) {
//         case 'A':
//         case 'a': // Handles lowercase input
//             cout << "Excellent" << endl;
//             break;
//         case 'B':
//         case 'b':
//             cout << "Good" << endl;
//             break;
//         case 'C':
//         case 'c':
//             cout << "Satisfactory" << endl;
//             break;
//         case 'D':
//         case 'd':
//             cout << "Needs improvement" << endl;
//             break;
//         case 'F':
//         case 'f':
//             cout << "Fail" << endl;
//             break;
//         default:
//             cout << "Invalid grade" <<endl;
//             break;
//     }

//     return 0;
// }


//--------------------question 10 -----------------------

// #include<iostream>
// using namespace std;

// int main(){

//     int charge ;
//     cout<<"Enter charge value : ";
//     cin>>charge ;

//     if (charge > 0){
//         cout<<"Cation";
//     }
//     else if(charge < 0){
//         cout<<"Anion";
//     }
//     else if(charge == 0){
//         cout<<"Neutral";
//     }

//     return 0;
// }


// -------------------  question 11 ------------------
// #include<iostream>
// using namespace std;

// int main() {
//     double E1;
//     int N;

   
//     cout << "Enter the ground state energy E1: ";
//     cin >> E1;
//     cout << "Enter the maximum level N: ";
//     cin >> N;

    
//     for (int n = 1; n <= N; ++n) {
//         double En = (n * n) * E1; // En = n² × E1
//         cout << "E_" << n << " = " << En << endl;
//     }

//     return 0;
// }






// ------------------------ question 12 ------------------

// #include<iostream>
// using namespace std;

// int main() {
//     double reading;
//     double sum = 0.0;
//     int validCount = 0;

//     cout << "Enter 10 sensor readings:\n";


//     for (int i = 1; i <= 10; ++i) {
//         cout << "Reading " << i << ": ";
//         cin >> reading;


//         if (reading < 0) {
//             continue; 
//         }

//         sum += reading;
//         validCount++;
//     }

//     cout << "--- Summary ---" << endl;
//     cout << "Total Sum of valid readings = " << sum << endl;
//     cout << "Count of valid readings = " << validCount << endl;


//     return 0;
// }




//---------------   question 13    -----------------------------------


// #include <iostream>
// using namespace std;

// int main() {
//     // Declare an array of size 6 to store the voltmeter readings
//     double readings[6];
//     double sum = 0.0;

//     cout << "Enter 6 voltmeter readings (V) " << endl;

//     // 1. Read values into the array using a loop
//     for (int i = 0; i < 6; ++i) {
//         cout << "Reading " << (i + 1) << ": ";
//         cin >> readings[i];
//     }

//     // 2. Loop through the array to compute the total sum
//     for (int i = 0; i < 6; ++i) {
//         sum += readings[i];
//     }

//     // 3. Compute the average
//     double average = sum / 6.0;

//     // 4. Print the final results
//     cout << "--- Results ---" << endl;
//     cout << "Total Sum = " << sum << " V" << endl;
//     cout << "Average Voltage = " << average << " V" << endl;

//     return 0;
// }






// ---------------  question 14 ----------- 

// #include <iostream>
// using namespace std;

// int main() {
//     // Declare an array of size 8 to store the readings
//     double readings[8];
//     int exceedCount = 0;
//     const double THRESHOLD = 75.0; // Fixed safety threshold

//     cout << "Enter 8 sensor readings:\n";

//     // 1. Read values into the array using a loop
//     for (int i = 0; i < 8; ++i) {
//         cout << "Reading " << (i + 1) << ": ";
//         cin >> readings[i];
//     }

//     // 2. Loop through the array and check against the threshold
//     for (int i = 0; i < 8; ++i) {
//         if (readings[i] > THRESHOLD) {
//             exceedCount++;
//         }
//     }

//     // 3. Print the final count
//     cout<<"Number of readings exceeding " << THRESHOLD << " units = " << exceedCount << endl;

//     return 0;
// }





// ------------------- question 15 ----------------------------

// #include <iostream>
// using namespace std;

// int main() {
//     
//     double readings[6];

//     cout << "Enter 6 readings: ";
    
//     for (int i = 0; i < 6; ++i) {
//         cout << "Reading " << (i + 1) << ": ";
//         cin >> readings[i];
//     }

//     cout << "Readings in reverse order:";

//     for (int i = 5; i >= 0; --i) {
//         cout << readings[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }





//---------------question 16 --------------


// #include <iostream>
// using namespace std;


// int main() {

//     double voltages[5] = {12.4, 230.1, 5.0, 115.5, 48.2};

//     double* ptr = voltages; 

//     cout << "Voltage readings using pointer arithmetic:\n";

  
//     for (int i = 0; i < 5; ++i) {
//         // *ptr gets the value at the current memory address
//         cout << "Reading " << (i + 1) << ": " << *ptr << " V" << endl;
        
//         ptr++; 
//     }

//     return 0;
// }





//---------------------------- question 17 -----------------------



#include <iostream>
using namespace std;

int main() {

    double offset1 = 1.25;
    double offset2 = 5.84;


    double* ptr1 = &offset1;
    double* ptr2 = &offset2;

    cout << "Before swap:" << endl;
    cout << "offset1 = " << offset1 << ", offset2 = " << offset2 << "\n\n";


    double temp = *ptr1;
    *ptr1 = *ptr2;       
    *ptr2 = temp;       

    cout << "After swap:" << endl;
    cout << "offset1 = " << offset1 << ", offset2 = " << offset2 << endl;

    return 0;
}
