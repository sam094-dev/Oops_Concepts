#include <bits/stdc++.h>
using namespace std;
class college; // forward deceleration
class student
{
public:
    // void display(college c1, college c2)
    // {

    //     cout << "Student in collage" << c1.count + c2.count;
    // }

    // will give error due to forward decleartion.

    void display(college, college);
};
class college
{
public:
    int count;
};

void student::display(college c1, college c2)
{

    cout << "Student in collage" << c1.count + c2.count;
}
int main()
{
    student s1;
    college c1, c2;
    c1.count = 10;
    c2.count = 20;
    s1.display(c1, c2);
}