//Find the Nth Term of the Fibonacci Series

#include<iostream>
using namespace std;

int fibonacciSeries(int n){
    if(n <= 1){
        return n;
    }

    return fibonacciSeries(n-1) + fibonacciSeries(n-2);
}

int main(){
    int n ;

    cout << "Enter n :";
    cin >> n;

    cout << fibonacciSeries(n) << " ";

    return 0;
}