//Factor of a number:

#include<iostream>
#include<math.h>
using namespace std;
//Method 1 -> iteration

int main(){

    int n ;
    cout << "Enter n :";
    cin >> n;

    for(int i = 1 ; i <= n ;i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
    return 0;
}

//Method 2 -> 
// void factor(int n){

//     for(int i = 1 ; i <= sqrt(n) ; i++){
//         if(n % i == 0){
//             if(i == n/i){
//                 cout << i << " ";
//             }
//             else{
//                 cout << i << " " << n/i << " ";
//             }
//         }
//     }
// }
// int main(){

//     int n ;
//     cout << "Enter n :";
//     cin >> n;
//     factor(n);
//     return 0;
// }