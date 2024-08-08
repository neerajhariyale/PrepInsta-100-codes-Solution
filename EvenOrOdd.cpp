#include<iostream>

using namespace std;

// METHOD 1 -> 

void evenOrOdd(int n){
    if(n%2 == 0){
        cout << n << ": is even." << endl;
    }
    else{
        cout<< n << ": is odd." << endl;
    }
}

int main(){

    int n;
    cout << "Enter the n :";
    cin >> n;

    evenOrOdd(n);
    
    return 0;
}

// METHOD 2 -> ***** TERNARY OPERATOR ******


int main(){

    int n;
    cout << "Enter the n :";
    cin >> n;

    (n%2 == 0) ? cout << "Even " : cout << "Odd" << endl;
    
    return 0;
}