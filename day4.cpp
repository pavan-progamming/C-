//basic code in function
#include <iostream>
using namespace std;

int add(int a,int b){
    return a+b;
} 
int main(){
    int x,y;
    cout << "enter a number: ";
    cin >> x >> y;
    cout << "sum is "<< add(x,y);
    return 0;
}

// squaring two numbers 
#include <iostream>
using namespace std;

int square(int a, int b){
    return a*b;
}
int main(){
    int x,y;
    cout << "Enter two Numbers: ";
    cin >> x >> y ;
    cout << "square: " << square(x,y);
    return 0;
}

// even or odd check 
#include<iostream>
using namespace std;
int eo (int a){
    if (a%2==0)
        return true;
    else 
        return false;
    }
    int main(){
        int b;
        cout << "Enter a number: ";
        cin >> b;

        if(eo(b)){
            cout << "it is even ";
        }else{
            cout << "it is odd ";
        }
        return 0;
    }


// Maximum of two numbers 
#include<iostream>
using namespace std;

int max(int a,int b){
    if(a>b)
    return a;
    else 
    return b;
}
int main(){
    int c,d;
    cout << "Enter num1 and num2: ";
    cin >> c >> d;
    if (max(c,d) == c) {
        cout << "num1 is grater";
    }else{
        cout << "num2 is grater";
    }
}

// factorial of a number 
#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "factorial of a number: " << factorial(a);
    return 0;
}