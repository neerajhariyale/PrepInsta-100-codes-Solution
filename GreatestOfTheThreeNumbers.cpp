//Greatest of the Three numbers

#include<iostream>
using namespace std;

// METHOD 1 -> *** using if - else ***
int main(){
    
    int a , b , c ;

    cout << "Enter a , b & c :";
    cin >> a >> b >> c ;

   if( (a >= b ) && (a >= c) ){
        cout << a << " : is greatest";
    }
    else if ((b >= a ) && (b >= c))
    {
        cout << b << ": is greatest";
    }
    else{
        cout << c << ": is greatest";
    }

    return 0;
}

// METHOD 1 -> *** using if - else ***

// int main(){
    
//     int a , b , c ;

//     cout << "Enter a , b & c :";
//     cin >> a >> b >> c ;

//    cout << max(a , max(b,c) ) << " : is greatest"; 

//     return 0;
// }
