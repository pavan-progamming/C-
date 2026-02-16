// pattrens in c++

// // square pattren
// #include <iostream>
// using namespace std ;
// main () {
//     int n=8;
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=n;j++){
//             cout << "*" ;
//         }
//         cout << endl ;
//     }
//     return 0;
// }

// //Right angle triangle
// #include <iostream>
// using namespace std ;
// main() {
//     int n = 3;
//     for(int i = 0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout << " * ";
//         }
//         cout << endl ;
//     }
// }

// //Reverse a right angle triangle
// #include <iostream>
// using namespace std;
// main() {
//     int r =3;
//     for(int i=1;i<=r;i++){
//         for(int j =1;j<= r-i+1;j++){
//         cout << " * ";
//     }
//     cout << endl;
// }
// }

// //right aligned triangle
// #include <iostream>
// using namespace std ;
// int r = 3;
// main() {
// for(int i=1;i<=r;i++){
//     for(int j=1;j<=r-i;j++){
//         cout << " ";
//     }
//     for (int j=1;j<=i;j++) {
//         cout << "*";
//     }
//     cout << endl;
// }
// return 0;
// }

// // //pyramid pattern
// #include<iostream>
// using namespace std;
// int r = 5;
// main()  {
// for(int i=1;i<=r;i++){
//     for(int j=1;j<=r-i;j++){
//         cout << " ";
//     }
//     for(int j =1;j<=2*i-1;j++){
//         cout << "*";
//     }
//     cout << endl;
// }
// return 0;
// }

#include<iostream>
using namespace std;
main() {
    int r = 3;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i-1;j++){
            cout << " ";
        }
        for(int j=1;j<=2*(r-i)+1;j++) {
            cout << "*";
        }
        cout << endl;
    }
     return 0;
}