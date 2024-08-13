//Palindrome number 

#include<iostream>
using namespace std;

//METHOD -> 1
int main(){
    int n , reverse = 0 , rem = 0 , copy=0;
    cout << "Enter a number:";
    cin >> n;
    copy = n;

    while(n != 0){
        rem = n % 10;
        reverse = reverse * 10 + rem ;
        n /= 10;
    }

    if(reverse == copy){
        cout << "Pallindrom";
    }
    else{
        cout << "Not Pallindrom";
    }
    return 0;
}


// METHOD- > 2 ***** USING RECURSION *****

// int ispallindrom(int n , int reverse , int rem){
//     //base case
//     if(n == 0){
//         return reverse;
//     }

//     rem = n % 10;
//     reverse = reverse * 10 + rem ;

//     return ispallindrom(n/10 , reverse , rem);
// }
// int main(){
//     int n , reverse = 0 , rem = 0 , copy=0;
//     cout << "Enter a number:";
//     cin >> n;
//     copy = n;

    
    
//     if(ispallindrom(n , reverse , rem) == copy){
//         cout << "Pallindrom";
//     }
//     else{
//         cout << "Not Pallindrom";
//     }
//     return 0;
// }