//Strong number
#include<iostream>
using namespace std;

int factorial(int fac){
    if(fac == 0){
        return 1; 
    }

    return fac * factorial(fac-1);
}

int strongNumber(int n){
    int sum = 0 , fac;
    while(n!=0){
        fac = n % 10 ;
        sum = factorial(fac) + sum;
        n /= 10;
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter n :";
    cin >> n ;

    if(strongNumber(n) == n){
        cout << "Strong Number:";
    }
    else{
        cout << "Not a Strong Number";
    }


    return 0;
}