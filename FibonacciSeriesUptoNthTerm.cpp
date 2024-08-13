//Fibonacci Series upto nth term  
#include <iostream>
using namespace std;

//METHOD 1 -> USING RECURSION15
int fibbonacciSeries(int n){
    if(n <= 1){
        return n; 
    }
    
    return fibbonacciSeries(n-1) + fibbonacciSeries(n-2);
}

int main(){
    int n ;
    
    cout << "Enter n :";
    cin >> n ;

    for(int i = 0 ; i < n ; i++){
        cout << fibbonacciSeries(i) << " ";
    }

    return 0;
}

//METHOD 2 -> ITERATIVE

// int main(){
//     int n , firstTerm = 0 , secondTerm = 1 , nextTerm;
    
//     cout << "Enter n :";
//     cin >> n ;

//     cout << firstTerm << " " << secondTerm << " ";

//     for(int i = 2 ; i < n ; i++){
//         nextTerm = firstTerm + secondTerm;
//         firstTerm= secondTerm;
//         secondTerm = nextTerm;

//         cout << nextTerm << " ";
//     }

//     return 0;
// }