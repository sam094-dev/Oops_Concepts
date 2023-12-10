#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    char *name;
    // char *name;
    student(char name[])
    {
        char *temp = new char[strlen(name) + 1];
        strcpy(temp, name);
        this->name = temp;
    }
    void display()
    {
        cout << name << endl;
    }
};
int main()
{
    char name[] = "Saurabh";
    student s1(name);
    name[0] = 'P';
    student s2(name);
    s1.display();
    s2.display();
}