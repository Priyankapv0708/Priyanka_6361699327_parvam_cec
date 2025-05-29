#include<iostream>
using namespace std;
class A
{
    public: void ABC()
    {
        cout<<"displaying from A"<<endl;
    }
};
class B:public A
{
    public: void BCA(){
        cout<<"displaying from B"<<endl;
    }
};
class C:public B
{
    public: void CAB()
    {
        cout<<"displaying from C"<<endl;
    }
};
int main()
{
    C obj;
    obj.CAB();
    obj.BCA();
    obj.ABC();
}