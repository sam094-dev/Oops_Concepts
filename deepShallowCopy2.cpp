
#include <bits/stdc++.h>
using namespace std;

class student{
public:
	int age;
	// string name;
	char* name = new char[100];
	int roll;

	student(int age, char name[], int roll)
	{
		this->age = age;
		// age = new int(age);
		// this->name = name;
		strcpy(this->name, name);
		this->roll = roll;
	}
	student(student&s1){
		char* temp = new char[100];
		strcpy(temp, s1.name);
		this->name = temp;
		this->age = s1.age;
		this->roll = s1.roll;
	}

	void print()
	{
		cout << age << endl;
		cout << name << endl;
		cout << roll << endl;
	}
};
int main()
{
	char name[] = "mohit";
     student s1(1, name, 20);
     student s2(s1);
     // s1.age = 90;
     s1.name[2] = 'p';

     s2.print();
     s1.print();
}