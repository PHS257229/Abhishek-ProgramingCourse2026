///////////////////////arithmatic operators///////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     int totalStudents = 82;
//     int groupSize = 5;

//     cout << "Full groups: " << totalStudents / groupSize << endl;   // 16
//     cout << "Leftover students: " << totalStudents % groupSize << endl; // 2

//     return 0;
// }

///////////////////////relation (comparison) operators 1 ///////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     double attendance = 74.5;

//     cout << boolalpha;   // print true/false instead of 1/0
//     cout << "Eligible for exam (>=75%): " << (attendance >= 75) << endl;

//     return 0;
// }


///////////////////////relation (comparison) operators 2 ///////////////////

// #include <iostream>

// using namespace std;

// int main()
// {
//     int a;
//     a = 15.0 < 15;
//     cout << a << endl;
//     return 0;
// }

///////////////////////relation (comparison) operators 3 ///////////////////

// #include <iostream>

// using namespace std;

// int main()
// {
//     int a, b, c;
//     cout << "Enter two numbers a and b" << endl;
//     cin >> a >> b;
//     c = a == b;// if we use bool in front of  c then this gives it in "true or fales"
//     cout<<boolalpha;
//     cout << (a == b) << endl;
//     cout << c << endl;

//     return 0;
// }

///////////////////////relation (comparison) operators 3 ///////////////////

// #include <iostream>

// using namespace std;

// int main()
// {
//     int a, b, c, d;
//     a=5;
//     b=5;
//     c=5;
//     d = (a == b == c);//a==b = 1 than 1 == c--> 0 Result = 0
//     cout << d << endl;
//     return 0;
// }



///////////////////////logical operators//////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     double cgpa = 8.2;
//     double attendance = 82.0;

//     bool isEligible = (cgpa >= 7.5) && (attendance >= 75);
//     cout << boolalpha << "Eligible for scholarship: " << isEligible << endl;

//     return 0;
// }


///////////////////////Assignment operators//////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     int marks = 50;

//     marks += 10;   // same as: marks = marks + 10
//     cout << "Marks after bonus: " << marks << endl;

//     marks -= 5;    // same as: marks = marks - 5
//     cout << "Marks after penalty: " << marks << endl;

//     return 0;
// }

///////////////////////Increment / Decrement operators//////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 1;

//     cout << "a (post-increment): " << a++ << endl;  // prints 1, then becomes 2
//     cout << "Current a: " << a << endl;              // prints 2

//     cout << "a (pre-increment): " << ++a << endl;    // becomes 3, then prints 3

//     return 0;
// }
///////////////////////Increment / Decrement operators 2//////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 1;

//     cout << "a (pre-increment): " << ++a << endl;  // becomes 2, prints 2
//     cout << "Current a: " << a << endl;              // prints 2

//     cout << "a (post-increment): " << a++ << endl;    // prints 2, becomes 3

//     return 0;
// }

///////////////////////Increment / Decrement operators 3//////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 1, b;
//     b = ++a;
//     cout << "b: " << b << endl; 
//     cout << "a: " << a << endl;
//     a=1;
//     b = a++;
//     cout << "b: " << b << endl; 
//     cout << "a: " << a << endl;       
//     return 0;
// }


///////////////////////Increment / Decrement operators 3//////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 4, b, c;
//     b = a++;
//     c = ++b;
//     cout << "a: " << a << endl; 
//     cout << "b: " << b << endl;       
//     cout << "c: " << c << endl;  
//     return 0;
// }


// ///////////////////////Ternary operators//////////////////

// #include <iostream>
// using namespace std;

// int main() {
//     // bool hasInternship = true;
//     int hasInternship = ! 1;// this is done by my side
//     cout << "Internship: " << (hasInternship ? "Yes" : "No") << endl;
//     return 0;
// }