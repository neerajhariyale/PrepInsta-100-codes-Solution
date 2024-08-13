// Armstrong number
#include <iostream>
#include <math.h>
using namespace std;

int lengthOfN(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n = n / 10;
    }
    return count;
}

int main()
{
    int n, copy, rem = 0, sum = 0;

    cout << "Enter a number :";
    cin >> n;
    copy = n;

    int s = lengthOfN(n);

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + pow(rem, s);
        n /= 10;
    }

    if (sum == copy)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }

    return 0;
}