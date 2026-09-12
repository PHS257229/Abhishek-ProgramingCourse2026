/////////////////Practice session-lab//////////////

//////// Data conversion 1 ///////////////
//////Any non-zero value converts to true — including negative numbers. Only 0 converts to false.///////
// #include <iostream>
// using namespace std;

// int main() {
//     int x = -5;
//     bool flag = x;
//     cout <<boolalpha<< flag << endl;   // 1 (true)
//     return 0;
// }


//////// manipulators 1 ///////////////
///////setw Doesn't Stick////////
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << setw(10) << "Name" << "CGPA" << endl;   // only "Name" is padded!
//     return 0;
// }


//////// manipulators 2 ///////////////
// ///////setprecision Without fixed — Significant Digits, Not Decimals////////
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     double val = 91.256;
//     cout << setprecision(3) << val << endl;   // 91.3, not 91.256 truncated!
//     return 0;
// }

//////// manipulators 3 ///////////////
///////Fill always pads the empty side of the field. With left alignment, the empty side is on the right.////////
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << left << setfill('0') << setw(5) << 42 << endl;   // 42000, not 00042!
//     return 0;
// }

//////// manipulators 4 ///////////////
///////setfill Is Sticky.////////
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << setfill('*') << setw(8) << 5 << endl;
//     cout << setw(8) << "Hi" << endl;   // still padded with *, not blank!
//     cout<<setw(10)<<"afkdj"<<endl;
//     return 0;
// }

//////// manipulators 5 ///////////////
///////setw only pads — it never truncates.////////
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     cout << setw(3) << "Programming Course" << endl;
//     return 0;
// }

//////// manipulators 6 //////////////////
////////the last one set the mode.///////////
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     double x = 12345.6789;
//     cout << fixed << scientific << setprecision(3) << x << endl;   // scientific wins!
//     cout << scientific << fixed << setprecision(3) << x << endl;   // fixed wins!
//     return 0;
// }


//////// manipulators 7 //////////////////
////////setprecision(0) — The Rounding Trap.///////////
// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main() {
//     double val = 8.7;
//     cout << fixed << setprecision(0) << val << endl;   // 9, not 8 or 8.7!
//     return 0;
// }

//////// operators 1 //////////////////
////////Integer Division Inside a Mixed Expression.///////////
// #include <iostream>
// using namespace std;

// int main() {
//     cout << 5 / 2 * 2 << endl;   // 4, not 5!
//     return 0;
// }


//////// operators 2 //////////////////
////////Operator Precedence — * Before +///////////
// #include <iostream>
// using namespace std;

// int main() {
//     int result = 2 + 3 * 4;
//     cout << result << endl;   // 14, not 20!
//     return 0;
// }


//////// operators 3 //////////////////
////////Chained Relational Operators///////////
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 5;
//     cout << (1 < x < 3) << endl;   // 1 (true)! Even though 5 is not < 3
//     return 0;
// }


//////// operators 3 //////////////////
////////Logical AND — Short-Circuit///////////
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 0;
//     int y = 10;
//     if (x != 0 && (y / x > 2)) {   // safe! division never happens
//     // if (y / x > 2) {   // in some compilers it might run and give y/x=0, some will crash
//         cout << "Big ratio" << endl;
//     } else {
//         cout << "Skipped safely " << endl;
//     }
//     return 0;
// }


//////// operators 4 //////////////////
////////Post-Increment Inside an Expression///////////
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 5;
//     int y = x++ + x++;
//     cout << "y = " << y << endl;   // 11 (5 + 6), not 10!
//     return 0;
// }

