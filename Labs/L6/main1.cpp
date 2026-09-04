////////////////sizeof and & (address of) operators ///////

// #include <iostream>
// using namespace std;

// int main() {
//     int     n = 42;
//     double  d = 9.81;      // acceleration due to gravity

//     cout << "sizeof(int):    " << sizeof(n) << " byte(s)"  << endl;
//     cout << "sizeof(double): " << sizeof(d) << " byte(s)"  << endl;
//     cout << "sizeof(): " << sizeof(d) << " byte(s)"  << endl;


//     cout << "Address of n: " << &n << endl;
//     cout << "Address of d: " << &d << endl;
//     return 0;
// }

/////////Storing an Address in a Pointer////////

// #include <iostream>
// using namespace std;

// int main() {
//     double temperature = 36.6;
//     double* ptrTemp = &temperature;   // ptrTemp now "points to" temperature

//     cout << "temperature stored at: " << ptrTemp << endl;
//     cout << "which matches &temperature: " << &temperature << endl;
//     return 0;
// }

//////////////////Dereferencing 1 /////////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     double temperature = 36.6;
//     double* ptrTemp = &temperature;
//     cout << "Address ptrTemp holds: " << ptrTemp  << endl;
//     cout << "Value at that address: " << *ptrTemp << endl;  
//     temperature = 50;
//     cout << "Address ptrTemp holds: " << ptrTemp  << endl;
//     cout << "Value at that address: " << *ptrTemp << endl; 
//     return 0;
// }

//////////////////Dereferencing 2 /////////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     int x = 10;
//     int* p = &x;

//     cout << p  << endl;   
//     cout << *p << endl;   
//     cout << x  << endl;  
//     cout << &x << endl;   
// }


// // ///////////////////Changing a Variable Through Its Pointer////////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     double temperature = 36.6;
//     double* ptrTemp = &temperature;

//     *ptrTemp = 37.2;   // changes temperature itself, not just ptrTemp

//     cout << "temperature is now: " << temperature << endl; 

//     return 0;
// }


///////////////////////null pointer///////////////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     double* sensorReading = nullptr;   // no sensor connected yet — pointer points to "nothing"

//     double reading = 30;
//     sensorReading = &reading;

//     if (sensorReading == nullptr) {
//         cout << "No sensor data available yet." << endl;
//     } else {
//         cout << "Reading: " << *sensorReading << endl;
//     }

//     return 0;
// }

/////////////////////pointers and arrays/////////////////////////////
// #include <iostream>
// using namespace std;

// int main() {
//     double readings[5] = {12.1, 12.4, 12.0, 11.9, 12.3};
//     double* ptr = readings;   // no & needed — array name is already an address
//     //double ptr = &reading;
//     //double ptr = &reading[0] // three 
//     cout << "First reading via array:   " << readings[0] << endl;
//     cout << "First reading via pointer: " << *ptr         << endl;
//     return 0;
// }

/////////////////////pointers arithmatic/////////////////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     double readings[5] = {12.1, 12.4, 12.0, 11.9, 12.3};
//     double* ptr = readings;

//     for (int i = 0; i < 5; i++) {
//         cout << "Reading " << i << ": " << *(ptr + i) << endl;
//     }
//     return 0;
// }