#include <bits/stdc++.h>
using namespace std;
class complexClass
{
    int real;
    int complex;

public:
    complexClass(int real, int complex)
    {
        this->real = real;
        this->complex = complex;
    }
    complexClass operator+(complexClass &c2)
    {
        return complexClass(this->real + c2.real, this->complex + c2.complex);
    }
    void print()
    {
        cout << "REAL==" << real << endl;
        cout << "Complex==" << complex << endl;
    }
};
int main()
{
    complexClass c1(1, 2), c2(1, 2);
    complexClass c3 = c1 + c2;
    c3.print();
}