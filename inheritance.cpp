#include<iostream>
using namespace std;
class A
{
    public:
    void add(int a,int b)
    {
        cout<<"sum is:"<<(a+b)<<endl;
    }
};
class B: public A
{
    public:
    void display(){   add(40,29);   }
};
int main()
{
    B obj1;
    A obj2;
    obj1.display();
    obj1.add(100,6);
}