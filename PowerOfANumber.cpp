//Power of a number

#include<iostream>
#include<math.h>
using namespace std;
//METHOD 1 -> USING pow();
int main(){
    int power , base;

    cout << "Enter base and power :";
    cin >> base >> power ;

    cout << pow(base, power);
    return 0;
}

//METHOD 2 -> using for loop
// int main(){

//     int base , power ,answer = 1;
//     cout << "Enter base and power :";
//     cin >> base >> power ;

//     for(int i = 1; i <= power ; i++){
//         answer = answer*base;
//     }

//     cout << answer; 
//     return 0;
// }