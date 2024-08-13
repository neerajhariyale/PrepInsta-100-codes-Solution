//Perfect number
#include<iostream>
#include<math.h>
using namespace std;

void perfectNumber(int n){
    int sum = 0;
    for(int i = 1 ; i < n ;i++){
        if(n%i == 0){
            sum = sum + i;
        }
    }
    if(sum == n){
        cout << "Perfect Number";
    }
    else{
        cout << "Not a perfect number";
    }
}
int main(){
    int n ;

    cout << "Enter n:";
    cin >> n;

    perfectNumber(n);
    return 0;
}