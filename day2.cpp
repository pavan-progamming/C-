// // conditional statements in c++
#include <iostream>
using namespace std;
main() {
    int a ;
    cout << "Enter Your age :- " ;
    cin >> a ;
    if (a <= 18) {
        cout << "You are not eligible to vote !";
    } else {
        cout << "You are eligible to vote ";
    }
}

// nested conditional statements 
#include <iostream>
using namespace std;
main() {
    int a ;
    cout << "Enter Your Age :- " ;
    cin >> a ;
    if (a>18) {
        cout << "Congrates! you are eligible to vote "  ; 
    } if (a==18) {
        cout << "you still need an Year to vote ";
    } else {
        cout << "You are not eligible to vote ";
    }
}

// Loops in c++

// Basic loop 
#include <iostream>
using namespace std;
int main(){
        int a ;
        for (int i=0; i<=10; i++) {
            cout <<"\n"<< i ;
        }
}

//for with if 
#include <iostream>
using namespace std ;
main (){
    for (int i =0 ;i<=10 ;i++) {
         if ( i == 5) {
            cout << "Your time is done ";
        }
    }
}

// while loop 
#include <iostream>
using namespace std;
main() {
    int i=0;
    while (i<=10) {
        cout << i;
        i++;
    }
    
}

// do while loop
#include <iostream>
using namespace std ;
main(){
    int i = 1 ;
    do {
        cout << "hello" << endl ;
        i++ ;
    } while (i<=5);

}

// break statement 
#include <iostream>
using namespace std;
int main() {
for (int i=0;i<=10;i++) {
    if(i==5) break ;
    cout << i << endl;

}
}

//continue statement 
#include <iostream>
using namespace std;
int main(){
    int i =1;
    for(i=0;i<=10;i++) {
        if(i==5) continue;
        cout << i << endl ;
    }
}
