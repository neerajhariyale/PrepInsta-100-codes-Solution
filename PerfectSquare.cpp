//Perfect Square
#include<iostream>
#include<math.h>
using namespace std;

bool perfectSquare(int n){
    if(sqrt(n) * sqrt(n) == n){
        return true;
    }else{
        return false;
    }
}
int main(){

    int n ;
    cout << "Enter n :";
    cin >> n;

    if(perfectSquare(n)){
        cout << "Perfect Square ";
    }
    else{
        cout << "Not a Perfect Square ";
    }
    return 0;
}