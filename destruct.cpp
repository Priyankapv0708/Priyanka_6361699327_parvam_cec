#include<iostream>
using namespace std;
class day3
{
    int a,b;
    public:
        day3(){cout<<"default"<<endl;}
        day3(int x,int y)
        {   a=x;    b=y;
            cout<<"values are:"<<a<<" and "<<b<<endl;  }
        day3(int x){cout<<"value of x:"<<x<<endl; }
        ~day3(){cout<<"object deleted.....!!!!!"<<endl;}
};
int main(){
    day3 obj1;
    cout<<"my program today afternoon is good"<<endl;
    day3 obj2(69);
    day3 obj3(55,14);
    cout<<"my program yesterday was very good"<<endl;
    day3 obj4;
}
                                        