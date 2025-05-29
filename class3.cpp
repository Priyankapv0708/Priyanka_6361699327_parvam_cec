#include<iostream>
using namespace std;
class batchD
{
    int x,y;
    public:
        batchD()
        {
            cout<<"welcome to the program of programs"<<endl;
        }
        batchD(int a,int b)
        {
            x=a;
            y=b;
            cout<<"value of a and b are:"<<a<<" and "<<b<<endl;
        }
        batchD(batchD & objK)
        {
            x=objK.x;
            y=objK.y;
            cout<<"it is copying things from the existing object";
            cout<<"values of x and y in objK are:"<<x<<" and "<<y<<endl;
        }
};
int main()
{
    batchD obj1;
    batchD obj2(10,59);
    batchD obj3=obj2;
}  