#include <bits/stdc++.h>
using namespace std;
class student{
public:
    string student_name;
    int student_id;

    //default constructor

    student(){
    student_name="dafault";
    student_id=INT_MAX;
    }

    //parametrized constructor

    student(string name,int id){
    student_name=name;
    student_id=id;
    }

    // copy constructor

    student(student &s1){
    student_name=s1.student_name;
    student_id=s1.student_id;
    }
};
int main()
{
   student s1;
   cout<<s1.student_name<<" "<<s1.student_id<<endl;
   student s2("rohan",1);
   cout<<s2.student_name<<" "<<s2.student_id<<endl;

   student s3(s2);
   cout<<s3.student_name<<" "<<s3.student_id<<endl;
}