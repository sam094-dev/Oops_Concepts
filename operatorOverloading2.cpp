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
    complexClass &operator++()
    {
        this->real = this->real + 1;
        this->complex = this->complex + 1;
        return *this;
    }
    void print()
    {
        cout << this->real << " " << this->complex << endl;
    }
};
int main()
{
}