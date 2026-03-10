// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Enter array size: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter numbers:\n";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     // bubble sort logic
//     for(int i = 0; i < n-1; i++){          // passes
//         for(int j = 0; j < n-i-1; j++){    // comparisons

//             if(arr[j] < arr[j+1]){
//                 // swap
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }

//     cout << "Sorted array:\n";

//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void bubblesort(int n,int arr[]) {
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j] < arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
// }
// int main() {
//     int n;
//     int arr[n];
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     cout << "Enter the numbers into it: ";
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }

// bubblesort(n,arr);   

//     cout << "Sorted array:\n";
//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
//     int arr[n];
//     cout << "Add numbers into it: ";
//     for(int i=0;i<n;i++){
//     cin >> arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]<arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }
//     cout << "The sorted array is \n";
//     for(int i=0;i<n;i++){
//         cout << arr[i];
//     }

// }