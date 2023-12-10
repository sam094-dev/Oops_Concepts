#include <bits/stdc++.h>
using namespace std;
class baseClass
{
public:
    virtual void display()
    {
        cout << "Display function of base class has beed called" << endl;
    }
};

class derivedClass : public baseClass
{
public:
    void display()
    {
        cout << "Display function of Derived class has beed called" << endl;
    }
};
int main()
{
    derivedClass derivedClassObject;
    baseClass *baseClassPointer;
    baseClassPointer = &derivedClassObject;
    baseClassPointer->display();
}