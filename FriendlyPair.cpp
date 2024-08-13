//Friendly pair
#include<iostream>
using namespace std;

bool friendlyPair(int n1 , int n2){
    int sum1 = 0 , sum2 = 0;

    //factor N1
    for(int i = 1 ; i <= n1 ;i++){
        if(n1 % i == 0){
            sum1 = sum1 + i;
        }
    }
    //foctor OF N2
    for(int i = 1 ; i <= n2 ;i++){
        if(n2 % i == 0){
            sum2 = sum2 + i;
        }
    }

    if(sum1/n1 == sum2/n2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n1 , n2;
    cout << "Enter number1 and number2 :";
    cin >> n1 >> n2;

    if(friendlyPair(n1,n2)){
        cout << "Friendly Pair" << endl;
    }
    else{
        cout << "Not a Friendly Pair" << endl;
    }
    return 0;
}
