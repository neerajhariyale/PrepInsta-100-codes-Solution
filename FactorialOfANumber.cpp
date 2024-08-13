//Factorial of a number
#include<iostream>
using namespace std;

//METHOD 1 -> RECURSION
int factorial(int n){
    if(n<=1){
        return n;
    }

    return n*factorial(n-1);
}
int main(){
    int n ;
    cout << "Enter n:";
    cin >> n;

    cout << factorial(n) ;
    return 0;
}

//METHOD 2 ->  iteration

// int main(){

//     int n ,sum = 1;

//     cout << "Enter n: ";
//     cin >> n;

//     for(int i =  1 ; i <= n ; i++){
//         sum = sum*i;
//     }

//     cout << sum ;

//     return 0;
// }