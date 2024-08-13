//Abundant number
#include<iostream>
#include<math.h>
using namespace std;

bool  abundantNumber(int n){
    int sum = 0 ;

    for(int i = 1 ; i < n ; i++){
        if(n % i == 0){
            sum = sum + i;
        }
    }

    if(sum > n){
        cout << sum << endl;
        return true;
    }
    else{
        cout << sum << endl;
        return false;
    }
}

int main(){
    int n ; 
    cout << "Enter n :" ;
    cin >> n ;

    if(abundantNumber(n)){
        cout << "Abundant Number " ;
    }
    else{
        cout <<"Not Abundant Number ";
    }
    return 0;
}