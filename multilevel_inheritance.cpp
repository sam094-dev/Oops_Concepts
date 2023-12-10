#include <bits/stdc++.h>
using namespace std;
class vehicle{
private:
	int maxSpeed;
protected:
	int numTyres;
public:
	string color;
	void print(){
		cout<<"vehicle class called";
	}

};
class jsrVehicle{
    public:
	void print(){
		cout<<"Jsr vehicle";
	}
};
class car: public vehicle,public jsrVehicle{
  

};
int main()
{
      car c;
     c.jsrVehicle::print();
}  