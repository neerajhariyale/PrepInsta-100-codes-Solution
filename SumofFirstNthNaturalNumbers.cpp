//Sum of First N Natural numbers 
//Natural number do not include 0 and Negatice number 

#include <iostream>
using namespace std;

// METHOD 1 **********
// int main(){

//     int n , sum = 0;
//     cout << "Enter the n :";
//     cin >> n ;


//     for(int i = 1 ; i <= n ; i++ ){
//         sum += i;
//     }
    
//     cout << sum; 

//     return 0;
// }

// METHOD 2 ****using function *****

int naturalNumbersSum(int n){
    int sum = 0 ;
    for(int i = 1 ; i <= n ; i++){
        sum += i;
    }
    return sum;
}

int main(){

    int n;
    cout << "Enter the n :";
    cin >> n ;

    cout << naturalNumbersSum(n) << endl; 


    return 0;
}

