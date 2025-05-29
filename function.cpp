#include<iostream>
using namespace std;
class A
{
    public:
        A(){    cout<<"function1 called"<<endl;}
};
class B : public A
{
    public:
        B(){    cout<<"function2 called"<<endl;}
};
int main(){
    B obj1;
    A obj2;
}