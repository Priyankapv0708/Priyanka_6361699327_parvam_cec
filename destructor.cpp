#include<iostream>
using namespace std;
class A
{
    public:
    A(){cout<<"first class"<<endl;}
    ~A(){cout<<"delete first"<<endl;}
};
class B:public A
{
    public:
    B(){cout<<"second class"<<endl;}
    ~B(){cout<<"delete second"<<endl;}
};
int main()
{
    B obj;
}