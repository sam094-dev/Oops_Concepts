#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    ifstream inputobj;
    inputobj.open("input.txt");

    inputobj >> n;
    for (int i = 0; i < 10; i++)
    {
        int a;
        inputobj >> a;
        cout << (a) << endl;
    }
    inputobj.close();

    ofstream obj;
    obj.open("output.txt");
    obj << n;
    obj.close();
}