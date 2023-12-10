#include <bits/stdc++.h>
using namespace std;
class base1
{
    int data1;

public:
    base1(int a)
    {
        data1 = a;
    }
    void printdata1()
    {
        cout << "Base 1 constructor is called"
             << " " << data1 << endl;
    }
};
class base2
{
    int data2;

public:
    base2(int a)
    {
        data2 = a;
    }
    void printdata2()
    {
        cout << "Base 2 constructor is called"
             << " " << data2 << endl;
    }
};

class derived : public base1, public base2
{
    int data3;
    int data4;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        data3 = c;
        data4 = d;
    }
    void printdata3()
    {
        cout << "Base 3 constructor is called"
             << " " << data3 << " " << data4 << endl;
    }
};
int main()
{
    derived d(1, 2, 3, 4);
    d.printdata2();
}