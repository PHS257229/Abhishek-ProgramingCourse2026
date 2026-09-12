#include<iostream>
#include<fstream>

using namespace std;

int main(){

    //connecting our file with hout stream
    ofstream hout("this.txt");

    // creating a name string and filling it with the string entered by the user 
    string name;
    cout<<"Enter your name : ";
    cin>>name;

    // writing a string to the file

    hout<<"My name is " + name;


    hout.close();

    ifstream hin("this.txt");
    string content;
    // hin>>content;
    getline(hin, content);
    cout<<"the content of this file is : "<<content;
    hin.close();
    return 0;
}