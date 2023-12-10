#include <bits/stdc++.h>
using namespace std;
class baseClass
{
public:
    virtual void display() = 0;
};
class derivedClass : public baseClass
{
public:
    void display()
    {
        cout << "derived Class" << endl;
    }
};
int main()
{
    derivedClass derivedClassObject;
    derivedClassObject.display();
}