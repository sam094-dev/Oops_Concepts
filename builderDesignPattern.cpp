#include <bits/stdc++.h>
using namespace std;
class phone
{
    string os;
    int model;
    int battery;
    string brand;

public:
    phone(string os, int model, int battery, string brand)
    {
        this->os = os;
        this->model = model;
        this->battery = battery;
        this->brand = brand;
    }
    void printFeatures()
    {
        cout << this->os << endl
             << this->model << endl
             << this->battery << endl
             << this->brand << endl;
    }
};
class PhoneBuilder
{
    string os;
    int model;
    int battery;
    string brand;

public:
    PhoneBuilder *setos(string os)
    {
        this->os = os;
        return this;
    }
    PhoneBuilder *setmodel(int model)
    {
        this->model = model;
        return this;
    }
    PhoneBuilder *setbattery(int battery)
    {
        this->battery = battery;
        return this;
    }
    PhoneBuilder *setbrand(string brand)
    {
        this->brand = brand;
        return this;
    }
    phone *build()
    {
        return new phone(os, model, battery, brand);
    }
};
int main()
{
    phone *p = (new PhoneBuilder())
                   ->setos("MAC")
                   ->setbattery(90)
                   ->setbrand("apple")
                   ->build();
    p->printFeatures();
}