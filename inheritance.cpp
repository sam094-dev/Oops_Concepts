#include <bits/stdc++.h>
using namespace std;
class vehicle{
private:
	int maxSpeed;
protected:
	int numTyres;
public:
	string color;
};
class car: public vehicle{
public:
	int numGears;

	void print(){
		
		cout<<numTyres<<endl;
		cout<<color<<endl;
		cout<<numGears<<endl;
	}

};
int main()
{
      vehicle v;
      v.color="blue";

      car c;
      c.color="red";
      c.numGears=5;
      c.print();

}