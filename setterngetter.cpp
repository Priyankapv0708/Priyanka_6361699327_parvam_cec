#include<iostream>
using namespace std;
class day4
{
    private:
        string name;
        int age;
    public:
        void input(string s,int a)
        {
            name=s;
            age=a;
        }
        void output()
        {
cout<<"Name:"<<name<<" and age:"<<age<<endl;
        }
};
int main(){
    day4 obj;
    obj.input("dora",27);
    obj.output();
}