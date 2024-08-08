//Sum of numbers in a given range

#include<iostream>
using namespace std;


//METHOD 1 ->

// int main(){

//     int n , m , sum = 0; 

//     cout << "Enter the n :" ;
//     cin >> n;
//     cout << "Enter the m :";
//     cin >> m;

//     for(int i = n ; i <= m ; i++){
//         sum += i;
//     }

//     cout << sum ;
//     return 0;
// }

//METHOD 2 ->

int main(){

    int n , m , sum = 0; 

    cout << "Enter the n :" ;
    cin >> n;
    cout << "Enter the m :";
    cin >> m;

    sum = m*(m+1)/2 - n*(n+1)/2 + n;
    cout << sum ;
    return 0;
}