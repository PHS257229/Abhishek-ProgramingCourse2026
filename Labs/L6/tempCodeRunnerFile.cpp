
#include <iostream>
using namespace std;

int main() {
    double temperature = 36.6;
    double* ptrTemp = &temperature;
    cout << "Address ptrTemp holds: " << ptrTemp  << endl;
    cout << "Value at that address: " << *ptrTemp << endl;  
    temperature = 50;
    cout << "Address ptrTemp holds: " << ptrTemp  << endl;
    cout << "Value at that address: " << *ptrTemp << endl; 
    return 0;
}
