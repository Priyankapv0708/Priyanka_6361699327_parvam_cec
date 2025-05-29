#include<iostream>
using namespace std;
class day6
{
    public:
    void display()
    {
        cout<<"nothing is displayed"<<endl;
    }
    void display (int x)
    {
        cout<<"displaying x:"<<x<<endl;
    }
    void display(int a,int b)
    {
        cout<<"displaying 2 values:"<<a<<" and "<<b<<endl;
    }
};
int main()
{
    day6 obj;
    obj.display(20,49);
    obj.display(106);
    obj.display();

}