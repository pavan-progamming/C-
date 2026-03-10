#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while(start <= end)
    {
        int mid = (start + end) / 2;

        if(arr[mid] == key)
        {
            return mid;
        }

        else if(key > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[5] = {1,3,5,7,9};
    int key;

    cout << "Enter number to search: ";
    cin >> key;

    int result = binarySearch(arr,5,key);

    if(result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}