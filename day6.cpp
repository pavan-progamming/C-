// Linear search
#include <iostream>
using namespace std;
int ls(int arr[5], int num)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == num)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    cout << "Enter the number you want to search: ";
    int arr[5] = {1, 2, 3, 4, 5};
    int num;
    cin >> num;
    if (ls(arr, num))
    {
        cout << "it is present ";
    }
    else
    {
        cout << "it is not present";
    }
    return 0;
}

//same problem but using boolean operations 
#include<iostream>
using namespace std;

bool ls(int arr[],int n,int num)
{
    for(int i=0;i<n;i++) {
        if(arr[i]==num)
        return true;
    }
    return false;
}
int main (){
    int n;
    int num;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter numbers into it: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the number to search: ";
    cin >> num;
    if (ls(arr,n,num)){
        cout << "The given number is present 😁";
    }else {
        cout << "The given number is not present 🥲";
    }
    return 0;
}