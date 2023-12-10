#include <bits/stdc++.h>
using namespace std;
class vehicle{
private:
	int maxSpeed;
protected:
	int numTyres;
public:
	string color;
	vehicle(){
		cout<<"vehicle default constructor";
	}
	vehicle(int x){
		cout<<"vehicle Parametrized constructor";
	}
};
class car: public vehicle{
public:
	int numGears;
	car():vehicle(x){
		cout<<"Car is constructor";
	}

	~car(){
		cout<<"car distructor";
	}

	void print(){
		
		cout<<numTyres<<endl;
		cout<<color<<endl;
		cout<<numGears<<endl;
	}

};
int main()
{
     

      car c;
     
}  