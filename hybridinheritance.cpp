#include<iostream>
using namespace std;
class Principal
{
    public:
    Principal()
    {
        cout<<"welcome to city college"<<endl;
    }
    void message()
    {
        cout<<"i am the principal,remeber that..!!"<<endl;
    }
};
class CSE : public Principal
{
    public:
    CSE()
    {
        cout<<"welcome to CSE"<<endl;
    }
    void CS_Data()
    {
        cout<<"CS is computer science"<<endl;
    }
};
class IOT : public Principal
{
    public:
    IOT()
    {
        cout<<"welcome to IOT"<<endl;
    }
    void IOT_Data()
    {
        cout<<"IS is not IOT"<<endl;
    }
};
class Student:public CSE,public IOT
{
    public:
    void function()
    {
        cout<<"this is superchild class"<<endl;
    }
};
int main()
{
    Student s;
    s.CS_Data();
    s.IOT_Data();
    s.function();
    s.CSE::message();
    s.IOT::message();
}