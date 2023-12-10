#include <bits/stdc++.h>
using namespace std;
class grandparent
{
public:
    void display1()
    {
        cout << "I am in granparent" << endl;
    }
};
class parent1 : public grandparent
{
public:
    void display2()
    {
        cout << "I am in parent1" << endl;
    }
};
class parent2 : public grandparent
{
public:
    void display3()
    {
        cout << "I am in parent2" << endl;
    }
};
class child : public parent1, public parent2
{
public:
    void display4()
    {
        cout << "I am in child" << endl;
    }
};
int main()
{
    child childObject;
    childObject.display4();
}