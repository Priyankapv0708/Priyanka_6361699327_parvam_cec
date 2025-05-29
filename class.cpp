#include<iostream>
using namespace std;
class batchD
{
    int roll;
    char gender;
    public:
        int add();
        void display()
        {
            roll=106;
            gender='F';
            cout<<"SHOW OFF"<<roll<<" "<<gender;
        }
};
int batchD::add()
{
    cout<<"\naddition is done..........";
    return 0;
}
int main()
{
    batchD obj1;
    obj1.display();
    obj1.add();
    return 0;
} 