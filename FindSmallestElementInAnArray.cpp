//Find Smallest Element in an Array 
#include<iostream>
#include<climits>

using namespace std;

int smallestElement(int arr[] , int n){
    int min = INT_MAX;

    for(int i = 0 ; i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}
int main(){

    int arr[] = {87,8,9,7,4,5,78,45};
    int n = 8;


    cout << smallestElement(arr ,n) << endl;
    return 0;
}