#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = -1;
    throw n;
    try
    {
        if (n < 0)
            throw n;

        int m = 1, cnt = 1;
        while (n)
        {
            m *= n;
            n--;
        }
        cout << m << endl;
    }
    catch (int n)
    {
        cout << "Can Not Find factorial of " << n << " Beacause is it negative number" << endl;
    }
}