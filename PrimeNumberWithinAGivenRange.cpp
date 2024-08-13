// Prime number within a given range
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// METHOD 1 ->
bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n == 2)
    {
        return true;
    }
    else if (n % 2 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 3; i <= sqrt(n); i += 2)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n, m;
    cout << "Enter a number :";
    cin >> n >> m;

    for (int i = n; i <= m; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}