#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    static int id;
    void setname(string name)
    {
        cout << name << endl;
        id++;
    }
    static void printId()
    {
        cout << id << endl;
    }
};

// static fxn can access only static object
int student::id; // this is neccessary step
int main()
{
    student s, s2;
    s.setname("saurabh");
    student::printId();
    s2.setname("rohit");
    student::printId();
}