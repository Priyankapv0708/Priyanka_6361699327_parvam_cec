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
    void CS_Data()
    {
        cout<<"CS is computer science"<<endl;
    }
};
class IOT : public Principal
{
    public:
    void IOT_Data()
    {
        cout<<"IS is not IOT"<<endl;
    }
};
int main()
{
    CSE cs;
    cs.CS_Data();
    cs.message();
    IOT io;
    io.IOT_Data();
    io.message();
}