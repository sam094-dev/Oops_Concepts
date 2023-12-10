#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    void print()
    {
        cout << " this is student class" << endl;
    }
};
class mark : virtual public student
{
public:
    void displayMark()
    {
        cout << "This is mark class" << endl;
    }
};
class score : virtual public student
{
public:
    void displayScore()
    {
        cout << "This is score class" << endl;
    }
};
class result : public mark, public score
{
public:
    void displayScore()
    {
        cout << "This is score class" << endl;
    }
};
int main()
{
    result harry;
    harry.print();
}