#include <bits/stdc++.h>
using namespace std;
class student
{
public:
   int age;
   int const rollNo;
   int &agepointer;
   student(int r, int age) : rollNo(r), agepointer(this->age)
   {
      this->age = age;
   }
   void print()
   {
      cout << this->age << endl;
      cout << this->rollNo << endl;
      cout << (this->agepointer) << endl;
   }
};
int main()
{
   student s1(9, 3);
   s1.print();
}