#include<iostream>
using namespace std;
class A
{
    public:
        void show()
        {
            cout<<"welcome to city engineering college"<<endl;
        }
};
class B:public A
{
    public:
    void show()
    {
        cout<<"this is BatchD"<<endl;
    }
};
int main()
{
    B obj;
    obj.show();
    A obj1;
    obj1.show();
}
    