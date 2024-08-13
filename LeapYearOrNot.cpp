//Leap year or not

#include<iostream>
using namespace std;
// Method 1 ->  *********USING if - else **********
int main(){

    int year ;
    cout << "Enter a year :";
    cin >> year ;

    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
        cout << "leap year " ;
    }
    else{
        cout<< "not a leap year";
    }
    return 0;
}

// Method 1 -> *********USING TERNANRY OPERATOR **********

// int main(){

//     int year ;
//     cout << "Enter a year :";
//     cin >> year ;

//     (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? cout << "leap year " : cout<< "not a leap year";

//     return 0;
// }