// arrays 

//basic code 
// #include<iostream>
// using namespace std;
// main(){
//     int arr[3];
//     for (int i=0;i<3;i++){
//         cout << arr[i];
//     }
// }

// //takine input from the user 
// #include<iostream>
// using namespace std;

// main () {
// int arr[5]={3};
// cout << "enter numbers :- ";
// for(int i=0;i<7;i++){
//     cin >> arr[i];
// }
// cout << "The entered numbers are :- ";
// for(int i=0;i<5;i++){
//     cout << arr[i];
// }
// return 0;
// }

// // pr-1 add a elements in an array
// #include <iostream>
// using namespace std;
// main() {
//     int a=0;
//     int arr[3]={1,2,3};
//     for(int i=0;i<3;i++){
//         a=a+arr[i];
//     }
//     cout << a ;
// }

// // same problem taking the input from the user 
// #include<iostream>
// using namespace std;
// main(){
//     int a = 0;
//     int n;
//     cout << "Enter the size of an array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the numbers: ";
//     for(int i=0;i<n;i++){   
//        cin >> arr[i];
//     }
//     cout << "The addition of your numbers is: ";
//     for(int i=0;i<n;i++){   
//        a=a+arr[i];
//     }
//     cout << a;

// }

// largest in an array 
#include<iostream>
using namespace std;
main(){
    int n;
    int arr[n];
    cout << "Enter the size of an array: ";
    cin >> n;
    cout << "Eneter the values of the array: ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    int max=arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>max){
        max = arr[i];
        
    }

    }
    cout << "The max of the given values is " << max ;
    return 0;
    }
    

