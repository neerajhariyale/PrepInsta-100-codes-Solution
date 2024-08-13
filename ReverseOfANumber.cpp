//Reverse of a number 

#include<iostream>
using namespace std;
//METHOD 1 ->

int main(){
    int a , reverse = 0  , rem = 0;
    cout << "Enter a number :";
    cin >> a ;

    while(a != 0){
        rem = a % 10;
        reverse = reverse * 10 + rem;
        a /=  10;
    }
    cout << reverse;

    return 0;
}

// METHOD 2 -> ***** USING RECUSRION ******

// int getReverse(int a , int reverse , int rem){

//     //base case
//     if(a == 0){
//         return reverse;
//     }

//     rem = a % 10;

//     return getReverse(a/10 , reverse*10 + rem , rem );
// }
// int main(){
//     int a , reverse = 0  , rem = 0;
//     cout << "Enter a number :";
//     cin >> a ;

    
//     cout << getReverse(a , reverse , rem);

//     return 0;
// }