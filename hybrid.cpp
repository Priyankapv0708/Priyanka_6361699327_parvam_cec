#include<iostream>
using namespace std;
class A
{
    public:
    void showA()
    {cout<<"this is class A"<<endl;}
};
class B:public A
{
    public:
    void showB()
    {cout<<"this is class B"<<endl;}
};
class C{
    public:
    void showC()
    {cout<<"this is class C"<<endl;}
};
class D:public B,public C{
    public:
    void showD()
    {cout<<"this is class D"<<endl;}
};
int main()
{
    D obj;
    obj.showA();
    obj.showB();
    obj.showC();
    obj.showD();
    return 0;
}