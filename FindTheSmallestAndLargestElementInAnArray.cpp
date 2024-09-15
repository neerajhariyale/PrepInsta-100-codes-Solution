//Find the Smallest and largest element in an array

#include<iostream>
#include<climits>

using namespace std;

void smallestAndLargestElement(int arr[] , int n){
    int min = INT_MAX;
    int max = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << min << "," << max ;
}

int main(){

    int arr[] = {87,8,9,7,4,5,78,45};
    int n = 8;

    smallestAndLargestElement(arr ,n);
    return 0;
}