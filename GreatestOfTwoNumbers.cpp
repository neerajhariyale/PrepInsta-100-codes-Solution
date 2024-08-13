//Greatest of two numbers:

#include<iostream>
using namespace std;

//METHOD 1 -> *****using ternary *****

int main(){

    int a , b;
    cout << "Enter a & b :" ;
    cin >> a >> b;

    if(a == b){
        cout << "Both are Equals ";
    }
    else{
        (a >= b) ? cout << "A is greatest." : cout << "B is greatest" ;
    }

    return 0;
}

// METHOD 2 -> *****using max function*****

// int main(){

//     int a , b;
//     cout << "Enter a & b :" ;
//     cin >> a >> b;

//     if(a == b){
//         cout << "Both are Equals ";
//     }
//     else{
//         cout << "Greatest is :" << max(a , b) ;
//     }

//     return 0;
// }