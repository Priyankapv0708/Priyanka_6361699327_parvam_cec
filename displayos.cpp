#include<iostream>
using namespace std;
class Data
{
    public:
        void displayOS();
};
class Apple : public Data
{
    public:
    void displayOS(){
        cout<<"Apple uses iOS and macOS"<<endl;
    }
};
class Microsoft : public Data
{
    public:
    void displayOS()
    {
        cout<<"Microsoft uses WindowsOS"<<endl;
    }
};
int main()
{
    Microsoft m;
    m.displayOS();
    Apple a;
    a.displayOS();
}