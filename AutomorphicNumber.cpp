//Automorphic number 

#include<iostream>
using namespace std;

bool automorphicNumber(long long int n){

    long long int sq = n * n ;
    if(sq % n == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    long long int n;
    cout << "Enter n:";
    cin >> n;

    if(automorphicNumber(n) ){
        cout << "Automorphic Number  - > " << n * n << endl;
    }
    else{
        cout << "Not Automorphic Number - >" << n * n << endl;
    }

    return 0;
}