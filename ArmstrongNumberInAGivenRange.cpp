//Armstrong number in a given range
#include<iostream>
#include<math.h>
using namespace std;

int lengthOfN(int n){
    int count = 0;
    while(n){
        count++;
        n = n/10;
    }
    return count;
}

void printArmstrongNumber(int n , int m){
    
    for(int i = n ; i <= m ; i++){
        
        int sum = 0 , temp , length , digit;
        temp = i;
        length = lengthOfN(i);

        while (temp != 0)
        {
            digit = temp % 10;
            sum = sum + pow(digit , length);
            temp /= 10;
        }
        if(sum == i){
            cout << i << " " ;
        }
        
    }
}

int main(){

    int n , m;

    cout << "Enter a number n and m :";
    cin >> n >> m;

    printArmstrongNumber(n , m);

    return 0;
}