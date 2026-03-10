// //vector
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> a={1,2,3};
//         a.push_back(10);
//          a.pop_back(2);
//         for(int i = 0; i < a.size(); i++){
//         cout << a[i] << " ";
//     }
// }

// // taking the input from the user
// #include <iostream>
// #include <vector>
// using namespace std;
// main(){
// cout << "Enter the numbers : ";
// int n;
// cin >> n;
// vector <int> b;
// for(int i=0;i<n;i++){
//     int x;
//     cin >> x;
//     b.push_back(x);
// }
// for(int i=0;i<b.size();i++){
//     cout << b[i];
// }
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// main(){
// int a;
// cout << "how many numbers do you want to store: ";
// cin  >> a;

// vector <int> b;
// for(int i=0;i<a;i++){
//     int c;
//     cin >> c;
//     b.push_back(c);
// }
// int max=b[0];
// for(int i=0;i<b.size();i++){
//     if(b[i]>max){
//         max=b[i];
//     }
// }
// cout << max;
// }

//print n numbers
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> a = {2, 4, 23, 423};
    sort(a.begin() , a.end());
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
    
}


//revers a array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};

    reverse(v.begin(), v.end());

    for(int x : v)
        cout << x << " ";
}

//finding max element
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {5, 2, 8, 1, 3};

    cout << *max_element(v.begin(), v.end());

    return 0;
}