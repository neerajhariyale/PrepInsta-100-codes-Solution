#include <iostream>

using namespace std;

//METHOD  ->   *****Using Brute Force***** 

void postiveOrNegative(int n){
    if(n >= 0 ){
        cout << "Positive" << endl;
    }
    else{
        cout << "Negative" << endl;
    }
}
int main(){
    
    int n;

    cout << "Enter a Number :"<< endl;
    cin >> n ;

    postiveOrNegative(n);


    return 0;
}
