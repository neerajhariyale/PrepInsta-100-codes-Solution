// Sum of digits of a Number :

#include <iostream>
using namespace std;

//METHOD 1 ->
int main()
{
    int a , sum = 0;
    cout << "Enter a number :";
    cin >> a ;

    while (a != 0)
    {
        sum = sum + a % 10;
        a /= 10;
    }

    cout << sum ;

    return 0;
}

//METHOD 2 -> *****USING RECURSION*******

// int getSum(int a ,int sum){
//     //base case
//     if(a == 0){
//         return sum;
//     }
//     sum = sum + a % 10;

//     return getSum(a/10 , sum);
// }


// int main()
// {
//     int a , sum = 0;
//     cout << "Enter a number :";
//     cin >> a ;

//     cout << getSum(a , sum);

//     return 0;
// }