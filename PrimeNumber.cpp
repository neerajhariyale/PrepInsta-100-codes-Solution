//Prime number: 
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//METHOD 1 -> 
bool isPrime(int n){
    
    if(n <= 1){
        return false;
    } 
    else if(n == 2){
        return true;
    }
    else if(n%2 == 0){
        return false;
    }
    else{
        for(int i = 3 ; i < sqrt(n) ; i += 2){
            if(n % i ==0 ){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n ; 
    cout << "Enter a number :";
    cin >> n;

    if(isPrime(n)){
        cout << n << ": Prime number";
    }
    else{
        cout << n << ": Not a Prime NUmber";
    }

    
    return 0;
}