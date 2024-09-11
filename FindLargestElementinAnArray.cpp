//Find Largest element in an array

#include<iostream>
#include <climits>
using namespace std;

int largestElement(int arr[] , int n){
    int max = INT_MIN;

    for(int i = 0 ; i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){

    int arr[] = {1,8,9,7,4,5,78,45};
    int n = 8;


    cout << largestElement(arr ,n) << endl;
    return 0;
}