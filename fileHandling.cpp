#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream of;
    of.open("output1.txt");
    ifstream ifobj;
    ifobj.open("input.txt");
    char ch = ifobj.get();
    while (!ifobj.eof())
    {
        of << ch;
        ch = ifobj.get();
    }
}