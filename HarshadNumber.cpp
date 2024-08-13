//Harshad number 
#include<iostream>
using namespace std;

bool HarshadNumber(int n){

    int copy = n;
    int sum = 0;
    while(copy != 0){
        int rem = copy % 10 ;
        sum = sum + rem;
        copy /= 10;
    }

    if(n % sum == 0){
        return true;
    }
    else{
        return false;
    }
}
int main(){

    int n;
    cout << "Enter n :" ;
    cin >> n;

    if(HarshadNumber(n)){
        cout << "Harshad Number .";
    }
    else{
        cout << "Not a Harshad Number .";
    }

    return 0;
}