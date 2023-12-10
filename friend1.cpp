#include <bits/stdc++.h>
using namespace std;

class friendfunction
{
public:
    void display();
};

class parentFunction
{
private:
    int a = 0, b = 1;

public:
    friend void printNumber();

    // only display function of friend class can access private member of parentClass.
    friend void friendfunction::display();
    // Every function of friend class can access private member of parentClass.
    friend class friendfunction;
};
void printNumber()
{
    parentFunction f;
    cout << f.a << " " << f.b;
}
void friendfunction::display()
{
    parentFunction f;
    cout << f.a << " " << f.b << endl;
    cout << "display is goin on";
}
int main()
{
    printNumber();
    friendfunction s1;
    s1.display();
}