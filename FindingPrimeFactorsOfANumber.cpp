//Finding Prime Factors of a number
#include<iostream>
#include<math.h>
using namespace std;

//Method 1->
int main(){

    int n ;
    cout << "Enter n : ";
    cin >> n ;

    for(int i = 2 ; i <= sqrt(n) ; i++){
        while(n%i == 0){
            n/=i;
            cout << i << " ";
        }
    }
    if(n != 1){
        cout << n << endl;
    }

    return 0;
}