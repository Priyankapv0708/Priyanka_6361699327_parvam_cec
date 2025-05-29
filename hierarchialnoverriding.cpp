#include<iostream>
using namespace std;
class Vehicle
{
    public:
    void start()
    {
        cout<<"starting a vehicle"<<endl;
    }
};
class Car:public Vehicle
{
    public:
    void start()
    {
        cout<<"starting a car"<<endl;
    }
};
class Bike:public Vehicle{
    public:
    void start()
    {
        cout<<"starting a bike"<<endl;
    }
};
int main()
{
    Car car;
    Bike bike;
    cout<<"Car:";
    car.start();
    cout<<"Bike:";
    bike.start();

}